/* File: linked.c */
/* Deskripsi: Implementasi fungsi untuk operasi dasar Linked List */

#include "linked.h"
#include <stdlib.h>
#include <stdio.h>

/* Menyisipkan elemen di awal Linked List */
void InsertFirst(address *L, int X) {
    address newNode = (address)malloc(sizeof(Node)); // Alokasi memori untuk elemen baru
    if (newNode != NULL) {
        newNode->data = X; // Mengisi data
        newNode->next = *L; // Menautkan elemen baru ke list lama
        *L = newNode; // Mengupdate head list
    }
}

/* Menghapus elemen pertama dari Linked List */
void DeleteFirst(address *L, int *X) {
    if (*L != NULL) { // Pastikan list tidak kosong
        address temp = *L; // Simpan alamat elemen pertama
        *X = temp->data; // Simpan data elemen yang akan dihapus
        *L = temp->next; // Geser head ke elemen berikutnya
        free(temp); // Hapus elemen lama
    }
}

/* Mengecek apakah Linked List kosong */
boolean isEmpty(address L) {
    return (L == NULL);
}
