/*
Program : MiniBus
Author : 3411201122 Akbar Satrio Nugroho
Deskripsi : Program menampilkan minibus yang dipakai
Tanggal : 6 November 2020
*/

#include <iostream>

int main (){
	
	//input data
	int a,b,N,bus;
	
	//Algoritma
	printf("Program minibus pariwisata \n");
	printf("JUMLAH ANAK : \n");
	scanf("%d", &N);
	if (N>=1&&N<=7){
		a = N/N;
		bus = a%N;
		printf("bus yang digunakan sebanyak : %d\n", bus); 
	} else if (N>=8&&N<=1000){
		a = N/7;
		b = N%a;
		bus = a+1;
		printf("bus digunakan sebanyak : %d\n", bus);
	}
}
