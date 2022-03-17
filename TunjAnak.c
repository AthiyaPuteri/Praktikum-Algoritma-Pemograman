// Nama File : TunjAnak.c
// Deskripsi : Mengitung dan menampilkan besar tunjangan anak sebesar 10% dan maksimal 3 anak
// Nama      : Athiya Puteri Hidayat
// NIM       : 24060121140128
// Lab       : B1

#include <stdio.h>

int main()
{
    /* Kamus */
    int anak;
    int gaji;
    int R;
    int R2;

    /* Algoritma */
    printf("Masukkan jumlah anak yang dimiliki : ");
    scanf("%d", &anak);
    printf("Masukkan jumlah gaji : ");
    scanf("%d", &gaji);
    R = anak * 0.1 * gaji;
    R2 = 3 * 0.1 * gaji;


    if (anak < 3){
        printf("Tunjangan Anak: %d", R);
    } else{
          printf("Tunjangan Anak: %d", R2);
    }
    return 0;
}
