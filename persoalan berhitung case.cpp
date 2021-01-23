/*
Program : BerhitungMenggunakanCase
Author : 3411201122 Akbar Satrio Nugroho
Deskripsi : Program membuat kalkulator sederharna dengan case
Tanggal : 9 November 2020
*/

#include <iostream>

int main (){
	
	//Input data
	int i,n,simbol;
	
	//Algoritma
	printf("=========PERSOALAN BERHITUNG MENGGUNAKAN CASE========== \n\n");
	printf("==========MASUKAN ANGKA YANG AKAN DIHITUNG============= \n");
	scanf("%d", &i);
	printf("=====DENGAN===== \n");
	scanf("%d", &n);
	printf("==========DAFTAR OPERASI ARITMATIKA========== \n");
	printf("1. PENJUMLAHAN ( + ) \n");
	printf("2. PENGURANGAN ( - ) \n");
	printf("3. PERKALIAN ( * ) \n");
	printf("4. PEMBAGIAN ( / ) \n");
	printf("5. HASIL SISA BAGI  ( MOD ) \n");
	printf("==========PILIH OPERASI ARITMATIKA========== \n");
	scanf("%d", &simbol);
	printf("HASIL : \n");
	switch (simbol){
		case 1 : printf("%d\n", i+n);
		break;
		case 2 : printf("%d\n", i-n);
		break;
		case 3 : printf("%d\n", i*n);
		break;
		case 4 : printf("%d\n", i/n);
		break;
		case 5 : printf("%d\n", i%n);
		break;
	}
}
