/*
Program		:Menemukan Pola
Author 		:3411201122 - Akbar Satrio Nugroho
Deskripsi	:Program ini dibuat untuk menggantikan angka
			 yang diinputkan oleh pengguna dan setiap kali 
			 perulangan yang memiliki angka yang sama akan diganti 
			 dengan bintang, sehingga akan membentuk pola sesuai
			 dengan kelipatan yang ada.
Tanggal 	:25 November 2020
*/

#include <iostream>

int main (){
	
	//input data
	int k,n,i;
	
	//ALGORITMA
	scanf("%d\n", &n);
	scanf("%d", &k);
	while (i<=n){
		if(i!=n){
			if(i%k==0){
				printf("* ");
			}else{
				printf("%d ",i);
			}
		}else {
			if(i%k==0){
				printf("*");
			}else{
				printf("%d",i);
			}
		}
		i++;
	}
	return 0;
}
