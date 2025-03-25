/* File: stack.h */
/* Deskripsi: Header file untuk operasi Stack berbasis Linked List */

#ifndef STACK_H
#define STACK_H

#include "linked.h"
#include "boolean.h"

/* Stack direpresentasikan sebagai Linked List */
typedef struct Node *Stack;

/* Konstruktor: Membuat stack kosong */
void CreateEmpty(Stack *S);

/* Mengecek apakah stack kosong */
boolean IsEmpty(Stack S);

/* Menambahkan elemen ke stack */
void Push(Stack *S, int X);

/* Menghapus elemen dari stack */
void Pop(Stack *S, int *X);

/* Konversi bilangan desimal ke biner menggunakan Stack */
void ConvertToBinary(int decimal);

#endif
