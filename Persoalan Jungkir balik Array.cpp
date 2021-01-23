/*
Program 	: Program Membalik Data Array
Author 		: 3411201122 - Akbar Satrio Nugroho
Deskripsi 	: Sebuah program yang memiliki fungsi untuk mengubah
			  data Array menjadi Terbalik pada urutannya
Tanggal 	: 4 Desember 2020
*/

#include <iostream>

int main(){
	//Deklarasi
	int data[100];
	int i;
	//Input Data
	printf("Masukan Jumlah Data Array : ");
	scanf("%d", &data[100]);
	//Algoritma
	for (i=0;i<data[100];i++){
		printf("Masukan Element Array %d : ", i+1);
		scanf("%d", &data[i]);
	}
	for (i=data[0];i>=0;i--){
		printf("Urutan Data array setelah di balik %d : %d\n", i+1,data[i]);
	}
	
	printf("Akhir dari Program");
	return 0;
}
