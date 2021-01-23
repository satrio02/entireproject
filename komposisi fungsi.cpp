/*
Program 	: Komposisi Fungsi
Author 		: 3411201122-Akbar Satrio Nugroho
Deskripsi 	: Sebuah program yang memiliki fungsi
			  untuk menghitung sebuah fungsi berdasarkan
			  rumus yang telah ditetapkan.
Tanggal 	: 11 Desember 2020
*/

#include <iostream>

int komposisi(int a, int b, int x){
	if (a*x+b > 0){
		return (a*x)+b;
	}else{
		return (a*x)+b*-1;
	}
}

int main (){
	//deklarasi
	int a, b, k, x, hasil, i;
	int komposisi(int a, int b, int x);
	
	//algoritma
	printf("Masukan angka : ");
	scanf("%d %d %d %d", &a, &b, &k, &x);
	hasil = komposisi(a,b,x);
	printf("Hasilnya Adalah : ");
	printf("%d", hasil);
	return 0;
}
