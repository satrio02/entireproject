/*
Program : PembagianPermen
Author : 3411201122 Akbar Satrio Nugroho
Deskripsi : Program membagikan permen
Tanggal : 6 November 2020
*/

#include <iostream>

int main (){
	
	//Input data
	int N,K;
	int bagi,sisa;
	
	//Algoritma
	printf("Program pembagian permen\n");
	printf("jumlah permen yang akan dibagikan :");
	scanf("%d", &N);
	printf("jumlah anak yang akan menerima :");
	scanf("%d", &K);
	
	if (N/K)
	{
		bagi = N / K;
		sisa = N % K;
		printf("Hore ^_^", bagi);
	}
	else
	{
		printf("Kecewa :(", sisa);
	}
}
