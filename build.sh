#!/bin/bash
bison -d -v parser.y           # Generates y.tab.c and y.tab.h
flex lexer.l                   # Generates lex.yy.c
g++ -std=c++11 -g y.tab.c lex.yy.c icg.cpp symbol_table.cpp -o icg -ll -ly
