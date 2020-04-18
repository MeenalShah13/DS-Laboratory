a.out: main.c Huffman.o
	gcc main.o Huffman.o
main.o: main.c header.h
	gcc -c main.c header.h
Huffman.o: Huffman.c header.h
	gcc -c Huffman.c header.h
