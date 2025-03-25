/* File: stack.c */
/* Deskripsi: Implementasi operasi Stack berbasis Linked List */

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

/* Membuat stack kosong */
void CreateEmpty(Stack *S) {
    *S = NULL;
}

/* Mengecek apakah stack kosong */
boolean IsEmpty(Stack S) {
    return (S == NULL);
}

/* Menambahkan elemen ke stack (Push) */
void Push(Stack *S, int X) {
    InsertFirst(S, X);
}

/* Menghapus elemen dari stack (Pop) */
void Pop(Stack *S, int *X) {
    if (!IsEmpty(*S)) {
        DeleteFirst(S, X);
    }
}

/* Konversi bilangan desimal ke biner menggunakan Stack */
void ConvertToBinary(int decimal) {
    Stack S;
    CreateEmpty(&S);
    
    // Proses konversi dengan Stack
    if (decimal == 0) {
        printf("Biner: 0\n");
        return;
    }
    
    while (decimal > 0) {
        Push(&S, decimal % 2); // Simpan sisa bagi ke dalam stack
        decimal /= 2; // Bagi bilangan dengan 2
    }
    
    // Menampilkan hasil konversi
    printf("Biner: ");
    while (!IsEmpty(S)) {
        int bit;
        Pop(&S, &bit);
        printf("%d", bit);
    }
    printf("\n");
}
