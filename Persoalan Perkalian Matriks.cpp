/*
Program 	: Program Perkalian Matriks
Author 		: 3411201122 - Akbar Satrio Nugroho
Deskripsi 	: Sebuah program yang berfungsi untuk menghitung sebuah data Array
			  yang menggunakan metode perkalian untuk menghasilkan ouput program
Tanggal 	: 5 Desember 2020
*/

#include <stdio.h>

int main() {
	//Deklarasi
	int matriksA[10][10], matriksB[10][10], hasil[10][10];
	int i, j, k, m, n, p, q, jumlah = 0;
	
	//Algoritma
	//Input Data
	printf("Masukkan jumlah baris matriks pertama: ");
	scanf("%d",&m);
	printf("Masukkan jumlah kolom matriks pertama: ");
	scanf("%d",&n);
	printf("Masukkan jumlah baris matriks kedua: ");
	scanf("%d",&p);
	printf("Masukkan jumlah kolom matriks kedua: ");
	scanf("%d",&q);
	if(n != p){
    printf("Matriks tidak dapat dikalikan satu sama lain.\n");
	} else {
    printf("Masukkan elemen matriks pertama: \n");
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        scanf("%d", &matriksA[i][j]);
      }
    }
    printf("Masukkan elemen matriks kedua: \n");
    for(i = 0; i < p; i++){
      for(j = 0; j < q; j++){
        scanf("%d", &matriksB[i][j]);
      }
    }
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + matriksA[i][k] * matriksB[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    
    //Output
    printf("Hasil perkalian matriks: \n");
    for(i = 1; i < m; i++){
      	for(j = 0; j <= n; j++){
      			printf("%d ", hasil[i][j]);
		  }
      printf("\n");
    }
	}
  
	return 0;
}
