compiler:
	bison -d -t -o parser.cpp parser.yy
	flex scanner.ll
	g++ -std=c++0x -o parser.o -c parser.cpp
	g++ -std=c++0x -c -o scanner.o lex.yy.c
	g++ -std=c++0x -c -o main.o main.cpp
	g++ -std=c++0x -o MicroComp main.o scanner.o parser.o Symbol.cpp Scope.cpp ASTNode.cpp Tiny.cpp

dev:
	@echo Vipul Nikam
	@echo 180010041@iitdh.ac.in

clean:
	@rm -f *.o scanner.cpp parser.cpp lex.yy.c MicroComp 