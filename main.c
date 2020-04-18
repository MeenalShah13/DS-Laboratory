#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include "header.h"

int main()
{
    char letter[100];
    int size[100];
    char s[21];
    int arr[100];
    printf("Enter the file to read:");
    gets(s);
    createArray(s,letter,size);
    printf("The original file in terms of frequency table is: ");
    print(letter,size);
    int size1 = sizeof(letter)/sizeof(letter[0]);
    struct MinHeapNode* root=HuffmanCodes(letter, size, size1);
    printf("The ratio of original file to compressed file: %f\n",compSize(root));
    //printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    //printf("The code of each letter from Huffman tree is:\n");
    //printTree(root,arr,0);
    printf("\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nEND OF PROGRAM\n");
    return 0;
}
