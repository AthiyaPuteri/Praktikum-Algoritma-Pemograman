// Nama File : BiayaParkir.c
// Deskripsi : Mengitung dan menampilkan biaya parkir berdasarkan lamanya parkir
// Nama      : Athiya Puteri Hidayat
// NIM       : 24060121140128
// Lab       : B1

#include <stdio.h>

int main(){
    /* Kamus */
    int h;

    /* Algoritma */
    printf("Lamanya parkir: ");
    scanf("%d", &h);

    if ( h > 2){
        printf("\nBiaya parkir: %d", 2000 + (h - 2) * 500);
    } else {
        printf("\nBiaya parkir: %d", 2000);
    }

    return 0;
}
