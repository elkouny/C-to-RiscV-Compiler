CPPFLAGS += -std=c++20 -W -Wall -g -I include

.PHONY: default

default: bin/c_compiler

all : bin/print_canonical

src/currentParser.tab.cpp src/currentParser.tab.hpp : src/currentParser.y
	bison -v -d src/currentParser.y -o src/currentParser.tab.cpp

src/Lexer.yy.cpp : src/Lexer.flex src/Lexer.tab.hpp
	flex -o src/Lexer.yy.cpp  src/Lexer.flex

bin/c_compiler : src/cli.cpp src/compiler.cpp
	@mkdir -p bin
	g++ $(CPPFLAGS) -o bin/c_compiler $^

bin/print_canonical : src/print_canonical.o src/currentParser.tab.o src/Lexer.yy.o src/currentParser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/print_canonical $^

clean :
	rm -rf bin/*
