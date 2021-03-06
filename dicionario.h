#ifndef DICIONARIO_H_INCLUDED
#define DICIONARIO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>
#include <sys/stat.h>

#define MIN3(a, b, c) ((a) < (b) ? ((a) < (c) ? (a) : (c)) : ((b) < (c) ? (b) : (c)))
#define MAX_SIZE_WORD 47

typedef char* String;

// Arovor ternaria
typedef struct no {
    int character;
    struct no *left, *eq, *right;
} No; // tTree

// Lista encadeada
// typedef struct no {
//     char word[47];
//     struct no *next;
// } No;

// Assistent functions
void openAndVerifyFile(FILE **filePGM, char filePath[], char operation[]);
int levenshtein(const char *s1, const char *s2);
String changeLowerCase(char *changedWord);

No* LoadDictionary();

// Arvore ternaria
No* create(char character);
void insert(No **root, char *keyword);
bool search(No *root, char *keyword);

// Lista encadeada
// void insert(No **list, char *keyword);
// String search(No *list, char *keyword, unsigned long int start, unsigned long int end);

#endif
