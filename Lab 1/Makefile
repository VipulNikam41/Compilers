compiler: scanner.l parser.y
	@bison -d microParser.y
	@flex microLexer.l
	@g++ -w -o tiny tinyNew.C
	@g++ -w -std=c++11 lex.yy.c microParser.tab.c -lfl -o MicroComp headers/ast.cpp

dev:
	@echo Vipul Nikam
	@echo 180010041@iitdh.ac.in

clean:
	@rm -f lex.yy.c 
	@rm -f microParser.tab.c microParser.tab.h MicroComp tiny output.out