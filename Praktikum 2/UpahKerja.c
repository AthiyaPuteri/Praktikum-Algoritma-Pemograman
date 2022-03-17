// Nama File : BiayaParkir.c
// Deskripsi : Mengitung dan menampilkan biaya parkir berdasarkan lamanya parkir
// Nama      : Athiya Puteri Hidayat
// NIM       : 24060121140128
// Lab       : B1

#include <stdio.h>

int main()
{
    /* Rumus */
    int hour;
    int golongan;

    /* Algoritma */
    printf("Banyaknya jam kerja perminggu: ");
    scanf("%d", &hour);
    printf("Pilih golongan 1,2,3,4: ");
    scanf("%d", &golongan);

    if (hour < 40){
        printf("Upah kerja: %d", hour * ((golongan * 500) + 500));
    }else {
        printf("Upah kerja: %d", 40 * ((golongan * 500) + 500) + ((hour - 40) * ((golongan * 500) + 500)));
    }
    return 0;
}
