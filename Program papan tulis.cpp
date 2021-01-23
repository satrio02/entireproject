/*
Program : Papantulis
Author : 3411201122 Akbar Satrio Nugroho
Deskripsi : Program menghitung papan tulis
Tanggal : 5 November 2020
*/

#include<iostream>

int main(){
	
	// Masukan Data
	int P,L;
	int lebar,panjang;

	// ALGORITMA
	printf("Program membuat sebuah papan tulis \n");
	printf("MASUKAN PANJANG PAPAN TULIS : \n");
	scanf("%d", &P);
	printf("MASUKAN LEBAR PAPAN TULIS : \n");
	scanf("%d", &L);
	if ((P>=1&&P<=200)&&(L>=1&&L<=100))
	{
		panjang = P * 2;
		lebar = L / 2;
		printf("papan tulis memiliki panjang : %d\n", panjang);
		printf("papan tulis memiliki lebar : %d\n", lebar);	
	}
	else
	{
		printf("Data salah.");
	}
	
}
