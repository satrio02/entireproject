/*
Program : Membagikanbebek
Author : 3411201122 Akbar Satrio Nugroho
Deskripsi : Program mencari hasil bagi
Tanggal : 5 November 2020
*/

#include<iostream>

int main(){
	
	// Masukan Data
	int N,M;
	int sisa;
	int hasil;

	// ALGORITMA
	printf("Program membagikan bebek \n");
	printf("Masukan jumlah bebek yang ingin dibagikan : \n");
	scanf("%d", &N);
	printf("Dibagikan keberapa orang ? \n");
	scanf("%d", &M);
	if ((N>=1&&N<=1000)&&(M>=1&&M<=1000))
	{
		hasil = N/M;
		sisa = N%M;
		printf("Masing-masing memiliki : %d\n", hasil);
		printf("Sisa bebek yang dimiliki : %d\n", sisa);	
	}
	else
	{
		printf("gak punya bebek.");
	}
	
}
