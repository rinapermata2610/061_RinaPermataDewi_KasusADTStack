/* File: linked.h */
/* Deskripsi: Header file untuk operasi dasar Linked List */

#ifndef LINKED_H
#define LINKED_H
#include "boolean.h"

/* Definisi struktur Node */
typedef struct Node {
    int data;  // Menyimpan nilai elemen
    struct Node *next;  // Pointer ke elemen berikutnya
} Node;

typedef Node* address;

/* Operasi pada Linked List */
void InsertFirst(address *L, int X); // Menyisipkan elemen di awal list
void DeleteFirst(address *L, int *X); // Menghapus elemen pertama dalam list
boolean isEmpty(address L); // Mengecek apakah list kosong

#endif
