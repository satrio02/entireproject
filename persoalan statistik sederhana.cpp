/*
Program 	: Program Statistik Sederhana
Author 		: 3411201122 - Akbar Satrio Nugroho
Deskripsi 	: Sebuah program yang menggunakan data Array
			  menjadi sebuah data statistik yang dicari nilai
			  terbesar dan terkecil 
Tanggal 	: 4 Desember 2020
*/

#include <iostream>

int main(){
	//Deklarasi
	int data[100];
	int i,n,min,max;
	
	//Algoritma
	//Input Data
	//a:
	printf("Jumlah Data Array : ");
	scanf("%d", &data[100]);
	
	for(i=0;i<data[100];i++){
		printf("Data Array ke %d : ", i+1);
		scanf("%d", &data[i]);
	}
	
	for (i=0; i<data[100];i++){
		if (max<data[i]){
			max = data[i];
		}else if (min>data[i]){
			min = data[i];
		}
	}
	printf("Nilai Terbesar Dari Array : %d\n", max);
	printf("Nilai Terkecil Dari Array : %d\n", min);
	printf("Akhir dari Program");
	//goto a;
	return 0;
}
