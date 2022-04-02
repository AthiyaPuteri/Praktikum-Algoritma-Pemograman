// Nama File : JalurLintasan.c
// Deskripsi : Mengitung dan menampilkan besarnya penjumlahan sub array/tabel T
// Nama      : Athiya Puteri Hidayat
// NIM       : 24060121140128
// Lab       : B1

#include <stdio.h>

int main()
{
    // Kamus Lokal
	int i,j,N,Array;

    // Algoritma

    printf("Banyaknya elemen N : ");
    scanf("%d", &N);

    int T[N];
    Array = 0;

    printf("Masukkan bilangan integer: ");
    for (i = 0; i < N; i++) {
            scanf("%d", &T[i])-1;
    }
    for (i = 0; i < N; i++) {
        for (j = i; j < N; j++) {
            Array += T[j];
        }
    }
    printf("%d", Array);

    return 0;
}
