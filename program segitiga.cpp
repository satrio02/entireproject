/*
Program : LuasSegitiga
Author : 3411201122 Akbar Satrio Nugroho
Deskripsi : Program menghitung luas segitiga
Tanggal : 5 November 2020
*/

#include<iostream>

int main(){
	
	// Masukan Data
	int A,T;
	float luas;

	// ALGORITMA
	printf("Program menghitung Luas segitiga\n");
	printf("MASUKAN ALAS SEGITIGA \n");
	scanf("%d", &A);
	printf("MASUKAN TINGGI SEGITIGA \n");
	scanf("%d", &T);
	if ((A>=1&&A<=1000)&&(T>=1&&T<=1000))
	{
		luas = (A * T)/2;
		printf("Luas segitiga tersebut adalah : %f", luas);
	}
	else
	{
		printf("masukan data yang benar!");
	}
}
