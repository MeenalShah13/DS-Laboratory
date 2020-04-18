#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

// A Huffman tree node
struct MinHeapNode {

	char data;
	unsigned freq;
	struct MinHeapNode *left, *right;

};

struct MinHeap {

	unsigned size;
	unsigned capacity;
	struct MinHeapNode** array;
};

#endif // HEADER_H_INCLUDED
