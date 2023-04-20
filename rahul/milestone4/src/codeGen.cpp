#include "xv86.cpp"
#define wordType true
#define byteType false

using namespace std;

extern Env *curEnv;
extern string returnOffset(Env *env, Symbol *sym);
extern int tmpCnt;
extern map<string, string> tmpMap;

void addDataSection(xv86 *code, Env *baseEnv, bool isWord)
{
    map<string, Symbol *>::iterator itt;
    for (itt = baseEnv->addTable.begin(); itt != baseEnv->addTable.end(); itt++)
    {

        if ((*itt).se->baseType == "array")
        {
            if (((*itt).se->type == "int" || (*itt).se->type == "long") && isWord)
            {
                code->addLine((*itt).fi + ":\t.space " + convertNumToString(4 * (*itt).se->width));
            }
            else if (((*itt).se->type == "char" || (*itt).se->type == "bool") && !isWord)
            {
                code->addLine((*itt).fi + ":\t.space " + convertNumToString(4 * (*itt).se->width));
            }
        }
    }

    vector<Env *>::iterator childEnv;
    for (childEnv = baseEnv->children.begin(); childEnv != baseEnv->children.end(); childEnv++)
    {
        addDataSection(code, *(childEnv), isWord);
    }
}

void initSymToEnv(Env *env)
{
    for (auto symEntry : env->addTable)
    {
        symToEnv[symEntry.se] = env;
    }
    for (auto chld : env->children)
    {
        initSymToEnv(chld);
    }
}

void codeGen()
{

    int siz, blockSiz, blockNum;

    Env *baseEnv = ST->baseEnv;
    curEnv = baseEnv;

    getBlocks();

    nextUseTable.resize(IR.size() + 1);

    blockSiz = blocks.size();

    fori(0, blockSiz)
    {
        blocks[i]->computeNextUse();
    }

    xv86 *code = new xv86(ST);
    code->addLine(".data");

    addDataSection(code, baseEnv, wordType);

    string reg_out, reg_in1, reg_in2;

    code->addLine(".text");
    code->addLine("main:");
    code->addLine("\tpush\t\t%rbp");
    code->addLine("\tmovq\t\t%rsp,%rbp");

    /*
    -> Arrays are to be implemented
    -> String printing is to be allowed
    */

    bool raUpdation = false;

    blockNum = 0;
    siz = IR.size();
    fori(0, siz)
    {
        TAC *ir = IR[i];

        if (ir->isInt1 == true)
        {
            if (ir->l1 == "true")
            {
                ir->l1 = "1";
            }
            else if (ir->l1 == "false")
                ir->l1 = "0";
        }

        if (ir->isInt2 == true)
        {
            if (ir->l2 == "true")
            {
                ir->l2 = "1";
            }
            else if (ir->l2 == "false")
                ir->l2 = "0";
        }

        if (ir->op == "exit")
        {
        }

        if (ir->dest != NULL)
        {
            Symbol *sym = ir->dest;
            string _name = sym->name;
            if (_name.substr(0, 6) == "_tVar_" && tmpMap.find(sym->name) == tmpMap.end())
            {
                sym->offset = tmpCnt;
                tmpMap[sym->name] = convertNumToString(tmpCnt);
                tmpCnt += 4;
            }
        }

        if (ir->opd1 != NULL)
        {
            Symbol *sym = ir->opd1;
            string _name = sym->name;
            if (_name.substr(0, 6) == "_tVar_" && tmpMap.find(sym->name) == tmpMap.end())
            {
                sym->offset = tmpCnt;
                tmpMap[sym->name] = convertNumToString(tmpCnt);
                tmpCnt += 4;
            }
        }

        if (ir->opd2 != NULL)
        {
            Symbol *sym = ir->opd2;
            string _name = sym->name;
            if (_name.substr(0, 6) == "_tVar_" && tmpMap.find(sym->name) == tmpMap.end())
            {
                sym->offset = tmpCnt;
                tmpMap[sym->name] = convertNumToString(tmpCnt);
                tmpCnt += 4;
            }
        }

        if (ir->op == "=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                if (ir->l1 == "true")
                    code->addLine("\tmovl\t\t$1" + reg_out + ", -8(%rbp)");
                else if (ir->l1 == "false")
                    code->addLine("\tmovl\t\t$0" + reg_out + ", -8(%rbp)");
                else
                    code->addLine("\tmovl\t\t$" + ir->l1 + ", -8(%rbp)");
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-4(%rbp), %eax");
                code->addLine("\tmovl\t\t%eax, -8(%rbp)");
            }
        }
        else if (ir->op == "+=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\taddl\t\t%eax, -8(%rbp)");
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\taddl\t\t%eax, -8(%rbp)");
            }
        }
        else if (ir->op == "-=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tsubl\t\t%eax, -8(%rbp)");
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tsubl\t\t%eax, -8(%rbp)");
            }
        }
        else if (ir->op == "*=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\timull\t\t-4(%rbp), %eax");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\timull\t\t-4(%rbp), %eax");
            }
        }
        else if (ir->op == "/=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tidivl\t\t-4(%rbp), %eax");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);

                code->addLine("\tidivl\t\t-4(%rbp), %eax");
            }
        }
        else if (ir->op == "%=")
        {
            /* code */
            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tidivl\t\t-4(%rbp), %eax");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tidivl\t\t-4(%rbp), %eax");
            }
        }
        else if (ir->op == "<<=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tsall\t\t%cl, -8(%rbp)");
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tsall\t\t%cl, -8(%rbp)");
            }
        }
        else if (ir->op == ">>=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tsarl\t\t%cl, -8(%rbp)");
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tsarl\t\t%cl, -8(%rbp)");
            }
        }
        else if (ir->op == "&=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);

                code->addLine("\tandl\t\t%eax, -8(%rbp)");
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);

                code->addLine("\tandl\t\t%eax, -8(%rbp)");
            }
        }
        else if (ir->op == "|=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);

                code->addLine("\torl\t\t%eax, -8(%rbp)");
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);

                code->addLine("\torl\t\t%eax, -8(%rbp)");
            }
        }
        else if (ir->op == "^=")
        {
            /* code */

            if (ir->isInt1)
            {
                /* immediate assignment, e.g. a=5 */
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);

                code->addLine("\txorl\t\t%eax, -8(%rbp)");
            }
            else
            {
                /* assignment through variable, e.g. a=b */
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);

                code->addLine("\txorl\t\t%eax, -8(%rbp)");
            }
        }
        else if (ir->op == "+")
        {
            /* code */

            if (ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-4(%rbp), %edx");
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\taddl\t\t%edx, %eax");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\taddl\t\t-4(%rbp), %eax");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\taddl\t\t-4(%rbp), %eax");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\taddl\t\t-4(%rbp), %eax");
            }
        }
        else if (ir->op == "-")
        {
            /* code */

            if (ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-4(%rbp), %edx");
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tsubl\t\t%edx, %eax");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tsubl\t\t-4(%rbp), %eax");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tsubl\t\t-4(%rbp), %eax");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tsubl\t\t-4(%rbp), %eax");
            }
        }
        else if (ir->op == "*")
        {
            /* code */
            if (ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-4(%rbp), %edx");
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\timul\t\t%edx, %eax");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\timul\t\t-4(%rbp), %eax");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\timul\t\t-4(%rbp), %eax");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\timul\t\t-4(%rbp), %eax");
            }
        }
        else if (ir->op == "/")
        {
            /* code */

            if (ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-4(%rbp), %edx");
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tidivl\t\t%edx, %eax");
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tidivl\t\t-4(%rbp), %eax");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tidivl\t\t-4(%rbp), %eax");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tidivl\t\t-4(%rbp), %eax");
            }
        }

        else if (ir->op == "<")
        {
            /* code */

            if (ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tcmpl\t\t$" + ir->l1 + ", $" + ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tcmpl\t\t$" + ir->l1 + ", %eax");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tcmpl\t\t$" + ir->l2 + ", %eax");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %edx");
                code->addLine("\tmovl\t\t-4(%rbp), %eax");
                code->addLine("\tcmpl\t\t%edx, %eax");
            }
        }
        else if (ir->op == ">")
        {
            /* code */

            if (ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tcmpl\t\t$" + ir->l1 + ", $" + ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {

                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tcmpl\t\t$" + ir->l1 + ", %eax");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {

                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tcmpl\t\t$" + ir->l2 + ", %eax");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %edx");
                code->addLine("\tmovl\t\t-4(%rbp), %eax");
                code->addLine("\tcmpl\t\t%edx, %eax");
            }
        }
        else if (ir->op == "==")
        {
            /* code */

            if (ir->isInt1 && ir->isInt2)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tcmpl\t\t$" + ir->l1 + ", $" + ir->l2);
            }
            else if (ir->isInt1 && !ir->isInt2)
            {
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tcmpl\t\t$" + ir->l1 + ", %eax");
            }
            else if (!ir->isInt1 && ir->isInt2)
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %eax");
                code->addLine("\tcmpl\t\t$" + ir->l2 + ", %eax");
            }
            else
            {
                reg_in1 = code->getReg(ir->opd1, (ir->lineNum), 0);
                reg_in2 = code->getReg(ir->opd2, (ir->lineNum), 0);
                reg_out = code->getReg(ir->dest, (ir->lineNum), 1);
                code->addLine("\tmovl\t\t-8(%rbp), %edx");
                code->addLine("\tmovl\t\t-4(%rbp), %eax");
                code->addLine("\tcmpl\t\t%edx, %eax");
            }
        }
        else if (ir->op == "printint")
        {

            if (!ir->isInt1)
            {
                reg_out = code->getReg(ir->dest, (ir->lineNum), 0);
                code->addLine("\tmovl\t\t$0, %eax");
                code->addLine("\tcall\t\tprint@INT");
            }
            else
            {
                code->addLine("\tmovl\t\t$0, " + ir->target);
                code->addLine("\tcall\t\tprint");
            }
        }
        else if (ir->op == "label")
        {
            /* code */
            code->addLine(ir->target + ":");
        }
        else if (ir->op == "printstr")
        {
            vector<string>::iterator ittt;
            ittt = find(code->code.begin(), code->code.end(), ".text");
            string line = "\t.string\t\t" + ir->target;
            code->code.insert(ittt, line);
            // code->addLine("li $v0, 4");
            // code->addLine("la $a0, string_" + to_string(ir->lineNum));
            code->addLine("\tcall\t\tprint@STR");
        }
        else if (ir->op == "beginScope")
        {
            curEnv = ir->newScope;
            if (!(ir->isArgScope))
                code->addLine("\tsubq\t\t$" + convertNumToString(curEnv->width) + ", %rsp");
        }
        else if (ir->op == "endScope")
        {
            curEnv = ir->oldScope;
            code->addLine("\tsubq\t\t$" + convertNumToString(curEnv->width) + ", %rsp");
            curEnv = ir->newScope;
        }

        if (ir->lineNum == blocks[blockNum]->endLine)
        {
            code->flushAll();
            blockNum++;
        }
    }

    code->printCode();
}
