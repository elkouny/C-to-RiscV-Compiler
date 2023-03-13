CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include
PARSER += currentParser
LEXER += Lexer

all : bin/print_parsed bin/print_canonical

src/$(PARSER).tab.cpp src/$(PARSER).tab.hpp : src/$(PARSER).y
	bison -v -d  -Wconflicts-sr -Wother -Wcounterexamples src/$(PARSER).y -o src/$(PARSER).tab.cpp

src/$(LEXER).yy.cpp : src/$(LEXER).flex src/$(PARSER).tab.hpp
	flex -o src/$(LEXER).yy.cpp  src/$(LEXER).flex

bin/print_parsed : src/print_parsed.o src/$(PARSER).tab.o src/$(LEXER).yy.o src/$(PARSER).tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/print_parsed $^

bin/print_canonical : src/print_canonical.o src/currentParser.tab.o src/Lexer.yy.o src/currentParser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/print_canonical $^

clean :
	rm -rf src/*.tab.hpp
	rm -rf src/*.output
	rm -rf src/*.o
	rm -rf bin/*
	rm -rf src/*.tab.cpp
	rm -rf src/*.yy.cpp
