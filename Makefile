CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include
PARSER += currentParser
LEXER += Lexer

all : bin/print_parsed bin/print_canonical  bin/cumpile

bin/$(PARSER).tab.cpp bin/$(PARSER).tab.hpp : src/$(PARSER).y
	mkdir -p bin
	bison -v -d  -Wconflicts-sr -Wother -Wcounterexamples src/$(PARSER).y -o bin/$(PARSER).tab.cpp

bin/$(LEXER).yy.cpp : src/$(LEXER).flex bin/$(PARSER).tab.hpp
	mkdir -p bin
	flex -o bin/$(LEXER).yy.cpp  src/$(LEXER).flex

bin/print_parsed : src/compiler_code/print_parsed.o bin/$(PARSER).tab.o bin/$(LEXER).yy.o bin/$(PARSER).tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/print_parsed $^

bin/print_canonical : src/compiler_code/print_canonical.o bin/currentParser.tab.o bin/Lexer.yy.o bin/currentParser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/print_canonical $^

bin/cumpile : src/compiler_code/cumpile.o bin/currentParser.tab.o bin/Lexer.yy.o bin/currentParser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/cumpile $^

clean :
	rm -rf bin/*
	rm -rf src/compiler_code/*.o