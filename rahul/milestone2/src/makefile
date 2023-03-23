# Compiler settings
LEX = lex
YACC = bison
CC = g++

# Target executable name
TARGET = parser

# Phony targets
.PHONY: all clean

# Default target
all: $(TARGET)

# Target executable depends on lexer and parser
$(TARGET): lex.yy.c parser.tab.c
	$(CC) -o $@ $^

# Generate lexer from lexer.l file
lex.yy.c: lexer.l
	$(LEX) -o $@ $<

# Generate parser from parser.y file
parser.tab.c: parser.y
	$(YACC) -d -o $@ $<

# Clean up generated files
clean:
	$(RM) $(TARGET) lex.yy.c parser.tab.c parser.tab.h parser
