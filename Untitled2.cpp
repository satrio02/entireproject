/*
Program : AssigmentNTipeData
Author : 3411201122 Akbar Satrio Nugroho
Deskripsi : Program berisi contoh sederhana untuk mendefinisikan variable-variable
			bulat (short int, int, long int), karakter dan bilangan desimal
Tanggal : 21 Oktober 2020
*/

#include<iostream>

int main (){
	/* Kamus Data */
	short ab;
	int ac;
	long ad;
	char ae;
	float x;
	
	/* ALGORITMA */
	ab = 1;
	ac = 10;
	ad = 10000;
	ae = 'i';
	x = 2.55;
	printf("Karakter %d\n", ae);
	printf("Bilangan short integer %d\n", ab);
	printf("Bilangan integer %d\n", ac);
	printf("Bilangan long integer %d\n", ad);
	printf("Bilangan desimal %d\n", x);
	return 0;
}
