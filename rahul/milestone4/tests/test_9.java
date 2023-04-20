public class test_9 {
    // Expression and method invocation
    public static String isGreater(int x,int y){
        String result = (x > y) ? "x is greater than y" : "y is greater than x";
        return result;
    }
    public static String main(String[] args) {
        int b=1,c=1,d=1,m=1,k=1,j=2,y=3;
        int a = ((b+c)/d*m*(k%j)-d*j);
        a++;
        String result = isGreater(a, y);
        return result;
    }
}
