/*
Program 	: Detektor Palindrome
Author 		: 3411201122-Akbar Satrio Nugroho
Deskripsi 	: Sebuah program yang dibuat untuk tujuan 
			  mengecek sebuah kata yang apabila urutannya
			  dibalik menghasilkan sebuah kata yang sama.
Tanggal 	: 11 Desember 2020
*/

#include <iostream>
#include <string.h>

typedef char string[100];

int cekkata(string kata, int i, int j){
	int k = j/2;
	if (j==k){
		printf("Polindrome");
		return 1;
	}else if (kata [i] != kata [j]){
		printf("Bukan Polindrome");
	}else {
		return cekkata(kata, i+1, j-1);
	}
}

int main (){
	printf("Masukan Kata : ");
	string kata;
	scanf("%s", &kata);
	printf("\n", cekkata(kata, 0, strlen(kata)-1));
	return 0;
}
