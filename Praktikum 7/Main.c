// Nama      : Athiya Puteri Hidayat
// NIM       : 24060121140128
// Lab       : B1
// Deskripsi : Mencari harga X dalam T[1..N]

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Searching.h"

int main()
{
    // Kamus Lokal
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 22, 23, 25, 27};
    int x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ix;
    bool found;

    // Algoritma
    printf("Masukan x yang dicari: ");
    scanf("%d", &x);

    //SEQSearchX1(arr, n, &ix, x);
    //SEQSearchX2(arr, n, x, &ix, &found);

    BinSearch1(arr, n, x, &ix);
    (ix == -1)
        ? printf("Elemen tidak ditemukan")
        : printf("Elemen ditemukan pada index ke-%d", ix);

    return 0;
}
