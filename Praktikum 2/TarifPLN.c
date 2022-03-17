// Nama File : TarifPLN.c
// Deskripsi : Mengitung dan menampilkan besarnya tarif listrik bberdasarkan golongan dan pemakaian daya listrik
// Nama      : Athiya Puteri Hidayat
// NIM       : 24060121140128
// Lab       : B1

#include <stdio.h>

int main()
{
    /* Kamus */
    int daya;
    int golongan;

    /* Algoritma */
    printf("Masukkan daya listrik : ");
    scanf("%d", &daya);
    printf("Masukkan golongan 1 atau 2 : ");
    scanf("%d", &golongan);

    if (daya < 100){
        printf("%d", golongan * 100 * 1000);
    } else if (daya > 1000){
          printf("%d", (golongan * daya * 1000) * 1.1);
    } else {
          printf("%d", golongan * daya * 1000);
    }
    return 0;
}
