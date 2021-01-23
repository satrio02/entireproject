/*
Program		:Persoalan Dua Pangkat
Author 		:3411201122 - Akbar Satrio Nugroho
Deskripsi	:Program ini memiliki fungsi untuk mengecek apakah
			 angka yang kita masukan ini adalah dua pangkat atau bukan.
Tanggal 	:25 November 2020
*/

#include <iostream>

int fungsipangkat(int x, int y);


int main (){
	//deklarasi
	int n, i;
	int k=0;
	
	//input data
	scanf("%d", &n);
	
	//algoritma
	for (i=1; i<=n; i++){
		if (fungsipangkat(2,i)==n){
			k=1;
		}
	}
	if(k==1){
		printf("Ya!");
	}else {
		printf("Bukan!");
	}
}

int fungsipangkat(int x, int y){
	if(y==0){
		return 1;
	}else {
		return x*fungsipangkat(x,y-1);
	}
}
