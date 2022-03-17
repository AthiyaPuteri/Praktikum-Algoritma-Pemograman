// Nama File : HargaDiskon.c
// Deskripsi : Mengitung dan menampilkan beasarnya harga setelah diskon
// Nama      : Athiya Puteri Hidayat
// NIM       : 24060121140128
// Lab       : B1

#include <stdio.h>

int main()
{
    /* Kamus 8 */
    int harga;
    char character;
    int d;
    int RA;
    int RB;
    int RC;

    /* Algoritma */
    printf("Harga awal: ");
    scanf("%d", &harga);
    //printf("Pilih jenis: ");
    //scanf("%c", &character);
    RA = harga - (harga * 0.1);
    RB = harga - (harga * 0.15);
    RC = harga - (harga * 0.2);

    if (200 < harga < 10000){
    }
       if (character == 'A'){
           printf("%d", RA);
       } else if (character == 'B'){
           printf("%d", RB);
       } else if (character == 'C'){
           printf("%d", RC );
       } else {
           printf("Huruf yang dimasukkan tidak valid");
      }

    return 0;
}
