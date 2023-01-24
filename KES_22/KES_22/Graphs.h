#pragma once
#include "FST.h"
#define N_GRAPHS 25

// ����� ��������� 
#define GRAPH_SEPARATORS 2,\
	FST::NODE(18,\
			FST::RELATION(';',1), FST::RELATION('=',1),\
			FST::RELATION(',',1), FST::RELATION('{',1),\
			FST::RELATION('}',1), FST::RELATION('(',1),\
			FST::RELATION('[',1), FST::RELATION(']',1),\
			FST::RELATION(')',1), FST::RELATION('*',1),\
			FST::RELATION('+',1), FST::RELATION('-',1),\
		    FST::RELATION('/',1),FST::RELATION('<',1),\
			FST::RELATION('>',1),\
			FST::RELATION('&',1),\
			FST::RELATION('!',1), FST::RELATION('%',1)),\
	FST::NODE()
#define GRAPH_INKR 3,\
	FST::NODE(1,FST::RELATION(':',1)),\
	FST::NODE(4,FST::RELATION('+',2),FST::RELATION('-',2),FST::RELATION('/',2),FST::RELATION('*',2)),\
	FST::NODE()

#define GRAPH_ID 3, \
	FST::NODE(104,	\
			FST::RELATION('a', 1), FST::RELATION('b', 1), FST::RELATION('c', 1), FST::RELATION('d', 1), FST::RELATION('e', 1), FST::RELATION('f', 1),\
			FST::RELATION('g', 1), FST::RELATION('h', 1), FST::RELATION('i', 1), FST::RELATION('j', 1), FST::RELATION('k', 1), FST::RELATION('l', 1),\
			FST::RELATION('m', 1), FST::RELATION('n', 1), FST::RELATION('o', 1), FST::RELATION('p', 1), FST::RELATION('q', 1), FST::RELATION('r', 1),\
			FST::RELATION('s', 1), FST::RELATION('t', 1), FST::RELATION('u', 1), FST::RELATION('v', 1), FST::RELATION('w', 1), FST::RELATION('x', 1),\
			FST::RELATION('y', 1), FST::RELATION('z', 1),\
			FST::RELATION('a', 2), FST::RELATION('b', 2), FST::RELATION('c', 2), FST::RELATION('d', 2), FST::RELATION('e', 2), FST::RELATION('f', 2),\
			FST::RELATION('g', 2), FST::RELATION('h', 2), FST::RELATION('i', 2), FST::RELATION('j', 2), FST::RELATION('k', 2), FST::RELATION('l', 2),\
			FST::RELATION('m', 2), FST::RELATION('n', 2), FST::RELATION('o', 2), FST::RELATION('p', 2), FST::RELATION('q', 2), FST::RELATION('r', 2),\
			FST::RELATION('s', 2), FST::RELATION('t', 2), FST::RELATION('u', 2), FST::RELATION('v', 2), FST::RELATION('w', 2), FST::RELATION('x', 2),\
			FST::RELATION('y', 2), FST::RELATION('z', 2),\
			FST::RELATION('A', 1), FST::RELATION('B', 1), FST::RELATION('C', 1), FST::RELATION('D', 1), FST::RELATION('E', 1), FST::RELATION('F', 1),\
			FST::RELATION('G', 1), FST::RELATION('H', 1), FST::RELATION('I', 1), FST::RELATION('J', 1), FST::RELATION('K', 1), FST::RELATION('L', 1),\
			FST::RELATION('M', 1), FST::RELATION('N', 1), FST::RELATION('O', 1), FST::RELATION('P', 1), FST::RELATION('Q', 1), FST::RELATION('R', 1),\
			FST::RELATION('S', 1), FST::RELATION('T', 1), FST::RELATION('U', 1), FST::RELATION('V', 1), FST::RELATION('W', 1), FST::RELATION('X', 1),\
			FST::RELATION('Y', 1), FST::RELATION('Z', 1),\
			FST::RELATION('A', 2), FST::RELATION('B', 2), FST::RELATION('C', 2), FST::RELATION('D', 2), FST::RELATION('E', 2), FST::RELATION('F', 2),\
			FST::RELATION('G', 2), FST::RELATION('H', 2), FST::RELATION('I', 2), FST::RELATION('J', 2), FST::RELATION('K', 2), FST::RELATION('L', 2),\
			FST::RELATION('M', 2), FST::RELATION('N', 2), FST::RELATION('O', 2), FST::RELATION('P', 2), FST::RELATION('Q', 2), FST::RELATION('R', 2),\
			FST::RELATION('S', 2), FST::RELATION('T', 2), FST::RELATION('U', 2), FST::RELATION('V', 2), FST::RELATION('W', 2), FST::RELATION('X', 2),\
			FST::RELATION('Y', 2), FST::RELATION('Z', 2)),\
	FST::NODE(128,\
			FST::RELATION('a', 1), FST::RELATION('b', 1), FST::RELATION('c', 1), FST::RELATION('d', 1), FST::RELATION('e', 1), FST::RELATION('f', 1),\
			FST::RELATION('g', 1), FST::RELATION('h', 1), FST::RELATION('i', 1), FST::RELATION('j', 1), FST::RELATION('k', 1), FST::RELATION('l', 1),\
			FST::RELATION('m', 1), FST::RELATION('n', 1), FST::RELATION('o', 1), FST::RELATION('p', 1), FST::RELATION('q', 1), FST::RELATION('r', 1),\
			FST::RELATION('s', 1), FST::RELATION('t', 1), FST::RELATION('u', 1), FST::RELATION('v', 1), FST::RELATION('w', 1), FST::RELATION('x', 1),\
			FST::RELATION('y', 1), FST::RELATION('z', 1),\
			FST::RELATION('A', 1), FST::RELATION('B', 1), FST::RELATION('C', 1), FST::RELATION('D', 1), FST::RELATION('E', 1), FST::RELATION('F', 1),\
			FST::RELATION('G', 1), FST::RELATION('H', 1), FST::RELATION('I', 1), FST::RELATION('J', 1), FST::RELATION('K', 1), FST::RELATION('L', 1),\
			FST::RELATION('M', 1), FST::RELATION('N', 1), FST::RELATION('O', 1), FST::RELATION('P', 1), FST::RELATION('Q', 1), FST::RELATION('R', 1),\
			FST::RELATION('S', 1), FST::RELATION('T', 1), FST::RELATION('U', 1), FST::RELATION('V', 1), FST::RELATION('W', 1), FST::RELATION('X', 1),\
			FST::RELATION('Y', 1), FST::RELATION('Z', 1),\
			FST::RELATION('1', 1), FST::RELATION('2', 1), FST::RELATION('3', 1), FST::RELATION('4', 1), FST::RELATION('5', 1), FST::RELATION('6', 1),\
			FST::RELATION('7', 1), FST::RELATION('8', 1), FST::RELATION('9', 1), FST::RELATION('0', 1),\
			FST::RELATION('a', 2), FST::RELATION('b', 2), FST::RELATION('c', 2), FST::RELATION('d', 2), FST::RELATION('e', 2), FST::RELATION('f', 2),\
			FST::RELATION('g', 2), FST::RELATION('h', 2), FST::RELATION('i', 2), FST::RELATION('j', 2), FST::RELATION('k', 2), FST::RELATION('l', 2),\
			FST::RELATION('m', 2), FST::RELATION('n', 2), FST::RELATION('o', 2), FST::RELATION('p', 2), FST::RELATION('q', 2), FST::RELATION('r', 2),\
			FST::RELATION('s', 2), FST::RELATION('t', 2), FST::RELATION('u', 2), FST::RELATION('v', 2), FST::RELATION('w', 2), FST::RELATION('x', 2),\
			FST::RELATION('y', 2), FST::RELATION('z', 2),\
			FST::RELATION('A', 2), FST::RELATION('B', 2), FST::RELATION('C', 2), FST::RELATION('D', 2), FST::RELATION('E', 2), FST::RELATION('F', 2),\
			FST::RELATION('G', 2), FST::RELATION('H', 2), FST::RELATION('I', 2), FST::RELATION('J', 2), FST::RELATION('K', 2), FST::RELATION('L', 2),\
			FST::RELATION('M', 2), FST::RELATION('N', 2), FST::RELATION('O', 2), FST::RELATION('P', 2), FST::RELATION('Q', 2), FST::RELATION('R', 2),\
			FST::RELATION('S', 2), FST::RELATION('T', 2), FST::RELATION('U', 2), FST::RELATION('V', 2), FST::RELATION('W', 2), FST::RELATION('X', 2),\
			FST::RELATION('Y', 2), FST::RELATION('Z', 2),\
			FST::RELATION('1', 2), FST::RELATION('2', 2), FST::RELATION('3', 2), FST::RELATION('4', 2), FST::RELATION('5', 2), FST::RELATION('6', 2),\
			FST::RELATION('7', 2), FST::RELATION('8', 2), FST::RELATION('9', 2), FST::RELATION('0', 2)),\
	FST::NODE()


#define GRAPH_STRING_LITERAL 3,\
	FST::NODE(1, FST::RELATION('\"', 1)),\
	FST::NODE(87, \
			FST::RELATION('a', 1), FST::RELATION('b', 1), FST::RELATION('c', 1), FST::RELATION('d', 1),\
			FST::RELATION('e', 1), FST::RELATION('f', 1), FST::RELATION('g', 1), FST::RELATION('h', 1),\
			FST::RELATION('i', 1), FST::RELATION('j', 1), FST::RELATION('k', 1), FST::RELATION('l', 1),\
			FST::RELATION('m', 1), FST::RELATION('n', 1), FST::RELATION('o', 1), FST::RELATION('p', 1),\
			FST::RELATION('q', 1), FST::RELATION('r', 1), FST::RELATION('s', 1), FST::RELATION('t', 1),\
			FST::RELATION('u', 1), FST::RELATION('v', 1), FST::RELATION('w', 1), FST::RELATION('x', 1),\
			FST::RELATION('y', 1), FST::RELATION('z', 1),\
			FST::RELATION('A', 1), FST::RELATION('B', 1), FST::RELATION('C', 1), FST::RELATION('D', 1),\
			FST::RELATION('E', 1), FST::RELATION('F', 1), FST::RELATION('G', 1), FST::RELATION('H', 1),\
			FST::RELATION('I', 1), FST::RELATION('J', 1), FST::RELATION('K', 1), FST::RELATION('L', 1),\
			FST::RELATION('M', 1), FST::RELATION('N', 1), FST::RELATION('O', 1), FST::RELATION('P', 1),\
			FST::RELATION('Q', 1), FST::RELATION('R', 1), FST::RELATION('S', 1), FST::RELATION('T', 1),\
			FST::RELATION('U', 1), FST::RELATION('V', 1), FST::RELATION('W', 1), FST::RELATION('X', 1),\
			FST::RELATION('Y', 1), FST::RELATION('Z', 1),\
			FST::RELATION('0', 1), FST::RELATION('1', 1), FST::RELATION('2', 1), FST::RELATION('3', 1),\
			FST::RELATION('4', 1), FST::RELATION('5', 1), FST::RELATION('6', 1), FST::RELATION('7', 1),\
			FST::RELATION('8', 1), FST::RELATION('9', 1),\
			FST::RELATION(' ', 1), FST::RELATION(',', 1), FST::RELATION('.', 1), FST::RELATION(';', 1),\
			FST::RELATION('-', 1), FST::RELATION('+', 1), FST::RELATION('*', 1), FST::RELATION('/', 1),\
			FST::RELATION('=', 1), FST::RELATION(':', 1), FST::RELATION(')', 1), FST::RELATION('(', 1),\
			FST::RELATION('}', 1), FST::RELATION('{', 1), FST::RELATION(']', 1), FST::RELATION('[', 1),\
			FST::RELATION('!', 1), FST::RELATION('?', 1), FST::RELATION('#', 1), FST::RELATION('&', 1),\
			FST::RELATION('>', 1), FST::RELATION('<', 1), FST::RELATION('[', 1), FST::RELATION(']', 1),\
			FST::RELATION('\"', 2)),\
	FST::NODE()
#define GRAPH_SYMBOL_LITERAL 4,\
	FST::NODE(1, FST::RELATION('\'', 1)),\
	FST::NODE(88, \
			FST::RELATION('a', 2), FST::RELATION('b', 2), FST::RELATION('c', 2), FST::RELATION('d', 2),\
			FST::RELATION('e', 2), FST::RELATION('f', 2), FST::RELATION('g', 2), FST::RELATION('h', 2),\
			FST::RELATION('i', 2), FST::RELATION('j', 2), FST::RELATION('k', 2), FST::RELATION('l', 2),\
			FST::RELATION('m', 2), FST::RELATION('n', 2), FST::RELATION('o', 2), FST::RELATION('p', 2),\
			FST::RELATION('q', 2), FST::RELATION('r', 2), FST::RELATION('s', 2), FST::RELATION('t', 2),\
			FST::RELATION('u', 2), FST::RELATION('v', 2), FST::RELATION('w', 2), FST::RELATION('x', 2),\
			FST::RELATION('y', 2), FST::RELATION('z', 2),\
			FST::RELATION('A', 2), FST::RELATION('B', 2), FST::RELATION('C', 2), FST::RELATION('D', 2),\
			FST::RELATION('E', 2), FST::RELATION('F', 2), FST::RELATION('G', 2), FST::RELATION('H', 2),\
			FST::RELATION('I', 2), FST::RELATION('J', 2), FST::RELATION('K', 2), FST::RELATION('L', 2),\
			FST::RELATION('M', 2), FST::RELATION('N', 2), FST::RELATION('O', 2), FST::RELATION('P', 2),\
			FST::RELATION('Q', 2), FST::RELATION('R', 2), FST::RELATION('S', 2), FST::RELATION('T', 2),\
			FST::RELATION('U', 2), FST::RELATION('V', 2), FST::RELATION('W', 2), FST::RELATION('X', 2),\
			FST::RELATION('Y', 2), FST::RELATION('Z', 2),\
			FST::RELATION('0', 2), FST::RELATION('1', 2),FST::RELATION('2', 2), FST::RELATION('2', 2), FST::RELATION('3', 2),\
			FST::RELATION('4', 2), FST::RELATION('5', 2), FST::RELATION('6', 2), FST::RELATION('7', 2),\
			FST::RELATION('8', 2), FST::RELATION('9', 2),\
			FST::RELATION(' ', 2), FST::RELATION(',', 2), FST::RELATION('.', 2), FST::RELATION(';', 2),\
			FST::RELATION('-', 2), FST::RELATION('+', 2), FST::RELATION('*', 2), FST::RELATION('/', 2),\
			FST::RELATION('=', 2), FST::RELATION(':', 2), FST::RELATION(')', 2), FST::RELATION('(', 2),\
			FST::RELATION('}', 2), FST::RELATION('{', 2), FST::RELATION(']', 2), FST::RELATION('[', 2),\
			FST::RELATION('!', 2), FST::RELATION('?', 2), FST::RELATION('#', 2), FST::RELATION('&', 2),\
			FST::RELATION('>', 2), FST::RELATION('<', 2), FST::RELATION('[', 2), FST::RELATION(']', 2)),\
	FST::NODE(1, FST::RELATION('\'', 3)), \
	FST::NODE()
#define GRAPH_INT_NEGATIVE 6,\
	FST::NODE(1, \
			FST::RELATION('-', 1)),\
	FST::NODE(2, \
			FST::RELATION('0', 2),FST::RELATION('0', 4)),\
	FST::NODE(1, \
			FST::RELATION('x', 3)),\
	FST::NODE(32,\
			FST::RELATION('1',3),FST::RELATION('0',3),		FST::RELATION('2',3),FST::RELATION('3',3),\
			FST::RELATION('A',3),FST::RELATION('B',3),		FST::RELATION('4',3),FST::RELATION('5',3),\
			FST::RELATION('C',3),FST::RELATION('D',3),		FST::RELATION('6',3),FST::RELATION('7',3),\
			FST::RELATION('E',3),FST::RELATION('F',3),		FST::RELATION('8',3),FST::RELATION('9',3),\
			FST::RELATION('1',5),FST::RELATION('0',5),		FST::RELATION('2',5),FST::RELATION('3',5),\
			FST::RELATION('A',5),FST::RELATION('B',5),		FST::RELATION('4',5),FST::RELATION('5',5),\
			FST::RELATION('C',5),FST::RELATION('D',5),		FST::RELATION('6',5),FST::RELATION('7',5),\
			FST::RELATION('E',5),FST::RELATION('F',5),		FST::RELATION('8',5),FST::RELATION('9',5)),\
	FST::NODE(16,\
			FST::RELATION('1',4),FST::RELATION('0',4),		FST::RELATION('2',2),FST::RELATION('3',4),\
			FST::RELATION('4',4),FST::RELATION('5',4),		FST::RELATION('6',2),FST::RELATION('7',4),\
			FST::RELATION('1',5),FST::RELATION('0',5),		FST::RELATION('2',5),FST::RELATION('3',5),\
			FST::RELATION('4',5),FST::RELATION('5',5),		FST::RELATION('6',5),FST::RELATION('7',5)),\
	FST::NODE()

#define GRAPH_INT_LITERAL 6, \
	FST::NODE(23, \
			FST::RELATION('-', 1),FST::RELATION('0', 2),FST::RELATION('0', 5),\
			FST::RELATION('1',1),FST::RELATION('0',3),FST::RELATION('1',5),\
			FST::RELATION('2',1),FST::RELATION('3',1),FST::RELATION('2',5),FST::RELATION('3',5),\
			FST::RELATION('6',1),FST::RELATION('7',1),FST::RELATION('4',5),FST::RELATION('5',5),\
			FST::RELATION('1',1),FST::RELATION('6',5),FST::RELATION('7',5),\
			FST::RELATION('4',1),FST::RELATION('5',1),FST::RELATION('8',5),FST::RELATION('9',5),\
			FST::RELATION('8',1),FST::RELATION('9',1)),\
	FST::NODE(20,\
			FST::RELATION('1',1),FST::RELATION('0',1),		FST::RELATION('0',5),\
			FST::RELATION('2',1),FST::RELATION('3',1),		FST::RELATION('4',1),FST::RELATION('5',1),\
			FST::RELATION('6',1),FST::RELATION('7',1),		FST::RELATION('8',1),FST::RELATION('9',1),\
			FST::RELATION('1',5),FST::RELATION('2',5),		FST::RELATION('3',5),FST::RELATION('4',5),\
			FST::RELATION('5',5),FST::RELATION('6',5),		FST::RELATION('7',5),FST::RELATION('8',5),\
			FST::RELATION('9',5)),\
	FST::NODE(16,\
			FST::RELATION('1',2),FST::RELATION('0',2),		FST::RELATION('2',2),FST::RELATION('3',2),\
			FST::RELATION('4',2),FST::RELATION('5',2),		FST::RELATION('6',2),FST::RELATION('7',2),\
			FST::RELATION('1',5),FST::RELATION('0',5),		FST::RELATION('2',5),FST::RELATION('3',5),\
			FST::RELATION('4',5),FST::RELATION('5',5),		FST::RELATION('6',5),FST::RELATION('7',5)),\
	FST::NODE(1,FST::RELATION('x',4)),\
	FST::NODE(32,\
			FST::RELATION('1',4),FST::RELATION('0',4),		FST::RELATION('2',4),FST::RELATION('3',4),\
			FST::RELATION('A',4),FST::RELATION('B',4),		FST::RELATION('4',4),FST::RELATION('5',4),\
			FST::RELATION('C',4),FST::RELATION('D',4),		FST::RELATION('6',4),FST::RELATION('7',4),\
			FST::RELATION('E',4),FST::RELATION('F',4),		FST::RELATION('8',4),FST::RELATION('9',4),\
			FST::RELATION('1',5),FST::RELATION('0',5),		FST::RELATION('2',5),FST::RELATION('3',5),\
			FST::RELATION('A',5),FST::RELATION('B',5),		FST::RELATION('4',5),FST::RELATION('5',5),\
			FST::RELATION('C',5),FST::RELATION('D',5),		FST::RELATION('6',5),FST::RELATION('7',5),\
			FST::RELATION('E',5),FST::RELATION('F',5),		FST::RELATION('8',5),FST::RELATION('9',5)),\
		FST::NODE()

#define GRAPH_ISTRUE 5, \
	FST::NODE(1, FST::RELATION('t',1)),\
	FST::NODE(1, FST::RELATION('r',2)),\
	FST::NODE(1, FST::RELATION('u',3)),\
	FST::NODE(1, FST::RELATION('e',4)),\
	FST::NODE()


#define GRAPH_ISFALSE 6, \
	FST::NODE(1, FST::RELATION('f',1)),\
	FST::NODE(1, FST::RELATION('a',2)),\
	FST::NODE(1, FST::RELATION('l',3)),\
	FST::NODE(1, FST::RELATION('s',4)),\
	FST::NODE(1, FST::RELATION('e',5)),\
	FST::NODE()

#define GRAPH_FUNCTION 9, \
	FST::NODE(1, FST::RELATION('f', 1)),\
    FST::NODE(1, FST::RELATION('u', 2)),\
    FST::NODE(1, FST::RELATION('n', 3)),\
    FST::NODE(1, FST::RELATION('c', 4)),\
    FST::NODE(1, FST::RELATION('t', 5)),\
    FST::NODE(1, FST::RELATION('i', 6)),\
    FST::NODE(1, FST::RELATION('o', 7)),\
    FST::NODE(1, FST::RELATION('n', 8)),\
    FST::NODE()

#define GRAPH_IS 3,\
	FST::NODE(1,FST::RELATION('i',1)),\
	FST::NODE(1,FST::RELATION('s',2)),\
	FST::NODE()

#define GRAPH_POW 4,\
	FST::NODE(1,FST::RELATION('p',1)),\
	FST::NODE(1,FST::RELATION('o',2)),\
	FST::NODE(1,FST::RELATION('w',3)),\
	FST::NODE()
#define GRAPH_RANDOM 7,\
	FST::NODE(1,FST::RELATION('r',1)),\
	FST::NODE(1,FST::RELATION('a',2)),\
	FST::NODE(1,FST::RELATION('n',3)),\
	FST::NODE(1,FST::RELATION('d',4)),\
	FST::NODE(1,FST::RELATION('o',5)),\
	FST::NODE(1,FST::RELATION('m',6)),\
	FST::NODE()
#define GRAPH_LENGTH 7,\
	FST::NODE(1,FST::RELATION('l',1)),\
	FST::NODE(1,FST::RELATION('e',2)),\
	FST::NODE(1,FST::RELATION('n',3)),\
	FST::NODE(1,FST::RELATION('g',4)),\
	FST::NODE(1,FST::RELATION('h',5)),\
	FST::NODE(1,FST::RELATION('t',6)),\
	FST::NODE()
#define GRAPH_INTEGER 8,\
	FST::NODE(1, FST::RELATION('i',1)),\
	FST::NODE(1, FST::RELATION('n',2)),\
	FST::NODE(1, FST::RELATION('t',3)),\
	FST::NODE(1, FST::RELATION('e',4)),\
	FST::NODE(1, FST::RELATION('g',5)),\
	FST::NODE(1, FST::RELATION('e',6)),\
	FST::NODE(1, FST::RELATION('r',7)),\
	FST::NODE()

#define GRAPH_STRING 7, \
	FST::NODE(1, FST::RELATION('s',1)),\
	FST::NODE(1, FST::RELATION('t',2)),\
	FST::NODE(1, FST::RELATION('r',3)),\
	FST::NODE(1, FST::RELATION('i',4)),\
	FST::NODE(1, FST::RELATION('n',5)),\
	FST::NODE(1, FST::RELATION('g',6)),\
	FST::NODE()
#define GRAPH_SYMBOL 7, \
	FST::NODE(1, FST::RELATION('s',1)),\
	FST::NODE(1, FST::RELATION('y',2)),\
	FST::NODE(1, FST::RELATION('m',3)),\
	FST::NODE(1, FST::RELATION('b',4)),\
	FST::NODE(1, FST::RELATION('o',5)),\
	FST::NODE(1, FST::RELATION('l',6)),\
	FST::NODE()

#define GRAPH_MAIN 5, \
	FST::NODE(1,FST::RELATION('m',1)),\
	FST::NODE(1,FST::RELATION('a',2)),\
	FST::NODE(1,FST::RELATION('i',3)),\
	FST::NODE(1,FST::RELATION('n',4)),\
	FST::NODE()

#define GRAPH_DO 3, \
	FST::NODE(1,FST::RELATION('d',1)),\
	FST::NODE(1,FST::RELATION('o',2)),\
	FST::NODE()

#define GRAPH_WHILE 6, \
	FST::NODE(1,FST::RELATION('w',1)),\
	FST::NODE(1,FST::RELATION('h',2)),\
	FST::NODE(1,FST::RELATION('i',3)),\
	FST::NODE(1,FST::RELATION('l',4)),\
	FST::NODE(1,FST::RELATION('e',5)),\
	FST::NODE()

#define GRAPH_WRITE 6, \
	FST::NODE(1, FST::RELATION('w',1)),\
	FST::NODE(1, FST::RELATION('r',2)),\
	FST::NODE(1, FST::RELATION('i',3)),\
	FST::NODE(1, FST::RELATION('t',4)),\
	FST::NODE(1, FST::RELATION('e',5)),\
	FST::NODE()

#define GRAPH_WRITELINE 10, \
	FST::NODE(1, FST::RELATION('w',1)),\
	FST::NODE(1, FST::RELATION('r',2)),\
	FST::NODE(1, FST::RELATION('i',3)),\
	FST::NODE(1, FST::RELATION('t',4)),\
	FST::NODE(1, FST::RELATION('e',5)),\
	FST::NODE(1, FST::RELATION('l',6)),\
	FST::NODE(1, FST::RELATION('i',7)),\
	FST::NODE(1, FST::RELATION('n',8)),\
	FST::NODE(1, FST::RELATION('e',9)),\
	FST::NODE()

#define GRAPH_RETURN 7, \
	FST::NODE(1, FST::RELATION('r',1)),\
	FST::NODE(1, FST::RELATION('e',2)),\
	FST::NODE(1, FST::RELATION('t',3)),\
	FST::NODE(1, FST::RELATION('u',4)),\
	FST::NODE(1, FST::RELATION('r',5)),\
	FST::NODE(1, FST::RELATION('n',6)),\
	FST::NODE()

#define GRAPH_TYPE 5, \
	FST::NODE(1,FST::RELATION('t',1)),\
	FST::NODE(1,FST::RELATION('y',2)),\
	FST::NODE(1,FST::RELATION('p',3)),\
	FST::NODE(1,FST::RELATION('e',4)),\
	FST::NODE()

#define GRAPH_VOID 5, \
	FST::NODE(1, FST::RELATION('v',1)),\
	FST::NODE(1, FST::RELATION('o',2)),\
	FST::NODE(1, FST::RELATION('i',3)),\
	FST::NODE(1, FST::RELATION('d',4)),\
	FST::NODE()