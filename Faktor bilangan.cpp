/*
Program		:Faktor Bilangan
Author 		:3411201122 - Akbar Satrio Nugroho
Deskripsi	:Program ini memiliki tujuan untuk menghitung pemfaktoran 
			 dengan proses perulangan.
Tanggal 	:26 November 2020
*/

#include <iostream>

int main (){
	//deklarasi
	int n,i;
	
	//algoritma
	printf("Masukan nilai yang ingin difaktorkan : ");
	scanf("%d", &n);
	printf("Hasil pemfaktorannya adalah : ");
	for (i=n;i<=n;i--){
		if (n%i==0){
			printf("%d ",i);
			if(n%i==1){
				printf("%d ", i);
			}
		}else {
		}
	}
	return 0;
}
