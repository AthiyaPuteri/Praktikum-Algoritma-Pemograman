// Nama : Athiya Puteri Hidayat
// NIM : 24060121140128
// Nama file : insertion_sort.c
// Deskripsi : Membuat algoritma pengurutuan dengan cara membandingkan dan mengurutkan dua data pertama pada array

#include <stdio.h>
#include "fungsi_arr.c"

void insertionSort(int arr[], int n){
    //Kamus lokal
    int i, j, key;

    //Algoritma
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    //Kamus lokal
    int arr[]={47,25,51,7,93,45,1,69,57,29};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}
