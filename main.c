/* File: main.c */
/* Deskripsi: Program utama untuk konversi bilangan desimal ke biner menggunakan Stack */

#include "stack.h"
#include <stdio.h>

/* Fungsi untuk menampilkan menu */
void displayMenu() {
    printf("\n===================================\n");
    printf(" PROGRAM KONVERSI DESIMAL KE BINER \n");
    printf("===================================\n");
    printf("1. Konversi Desimal ke Biner\n");
    printf("2. Keluar\n");
    printf("Pilihan Anda: ");
}

int main() {
    int choice, decimal;
    
    do {
        displayMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                // Meminta input bilangan desimal
                printf("\nMasukkan bilangan desimal: ");
                scanf("%d", &decimal);
                
                // Validasi input (bilangan harus non-negatif)
                if (decimal < 0) {
                    printf("Bilangan harus positif!\n");
                } else {
                    printf("\nHasil konversi: ");
                    ConvertToBinary(decimal);
                }
                break;
                
            case 2:
                printf("\nTerima kasih telah menggunakan program ini!\n");
                break;
                
            default:
                printf("\nPilihan tidak valid, silakan coba lagi.\n");
                break;
        }
    } while (choice != 2);
    
    return 0;
}
