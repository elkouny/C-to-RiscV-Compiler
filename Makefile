# CPPFLAGS += -std=c++20 -W -Wall -g -I include

# .PHONY: default

# default: bin/c_compiler

# bin/c_compiler : src/cli.cpp src/compiler.cpp
# 	@mkdir -p bin
# 	g++ $(CPPFLAGS) -o bin/c_compiler $^

# clean :
# 	rm -rf bin/*

CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include
PARSER += currentParser
LEXER += Lexer

all : bin/print_parsed # bin/eval_expr

src/$(PARSER).tab.cpp src/$(PARSER).tab.hpp : src/$(PARSER).y
	bison -v -d  -Wconflicts-sr -Wother -Wcounterexamples src/$(PARSER).y -o src/$(PARSER).tab.cpp

src/$(LEXER).yy.cpp : src/$(LEXER).flex src/$(PARSER).tab.hpp
	flex -o src/$(LEXER).yy.cpp  src/$(LEXER).flex

bin/print_parsed : src/print_parsed.o src/$(PARSER).tab.o src/$(LEXER).yy.o src/$(PARSER).tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/print_parsed $^

# bin/eval_expr : src/eval_expr.o src/$(PARSER).tab.o src/$(LEXER).yy.o src/$(PARSER).tab.o
# 	mkdir -p bin
# 	g++ $(CPPFLAGS) -o bin/eval_expr $^

bin/print_canonical : src/print_canonical.o src/currentParser.tab.o src/Lexer.yy.o src/currentParser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/print_canonical $^

clean :
	rm src/*.o
	rm bin/*
	rm src/*.tab.cpp
	rm src/*.yy.cpp
	rm src/$(PARSER).output
	rm src/$(PARSER).tab.hpp
