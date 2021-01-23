/*
Program : Konstanta
Author : 3411201122 Akbar Satrio Nugroho
Deskripsi : Program membaca jari-jari lingkaran kemudian menghitung
			kemudian menghitung luar lingkaran dengan rumus
			L = PI r^2
Tanggal : 21 Oktober 2020
*/

#include<iostream>

int main(){
	/* Kamus Data*/
	const float PI = 3.1415;
	float r, Luas;

	/* ALGORITMA */
	//Baca data
	printf("Jari-jari lingkaran = \n");
	scanf("%f", &r);
	
	//Hitung Luas dan cetak hasil
	Luas = PI * r * r,
	printf("Luas lingkaran dengan jari-jari %f = %f\n", r, Luas);
	return 0;
}
