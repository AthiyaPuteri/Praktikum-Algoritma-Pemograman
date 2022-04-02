// Nama File : JalurLintasan.c
// Deskripsi : Mengitung dan menampilkan selisih jalur terpanjang dan terpendek dari banyaknya data jalur lintasan dan nilai-nilai data perjalanan
// Nama      : Athiya Puteri Hidayat
// NIM       : 24060121140128
// Lab       : B1

#include <stdio.h>

int main()
{
    // Kamus Lokal
    int i, N, max, min;

    // Algoritma
    printf("Banyaknya data jalur lintasan: ");
    scanf("%d",&N);

    int array[N];

    printf("Masukan nilai-nilai data perjalanan: ");
    for(i=0 ; i<N ; i++){
            scanf("%d", &array[i]);
      }

    max = array[0];
    min = array[0];
    for(i=0 ; i<N ; i++){
      if (array[i] > max){
        max = array[i];
      }
      if (array[i] < min){
        min = array[i];
      }
    }

    printf("Selisih jarak terpanjang dan terpendek: %d", max - min);
    return 0;
}
