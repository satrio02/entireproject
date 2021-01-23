/*
Program		:Funception
Author 		:3411201122 - Akbar Satrio Nugroho
Deskripsi	:Program ini bertujuan untuk menghitung menggunakan rumus
			 dan melakukan pengulangan sampai batai nilai akhir nya tercapai.
Tanggal 	:26 November 2020
*/

#include <iostream>

int main (){
	//deklarasi
	int a,b,x,y,i;
	
	//input data
	printf("Masukan Nilai A : ");
	scanf("%d", &a);
	printf("Masukan Nilai B : ");
	scanf("%d", &b);
	printf("Masukan Nilai X : ");
	scanf("%d", &x);
	printf("Masukan Nilai Y : ");
	scanf("%d", &y);
	//algoritma
	printf("Hasilnya adalah : \n");
	while (i=x){
		if(x<y){
			x = a*x+b;
			printf("%d\n", i);
		}else if(x>y){
			return 0;
		}
	}
}
