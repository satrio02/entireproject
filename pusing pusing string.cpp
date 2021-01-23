/*
Program 	: Menukar posisi string
Author 		: 3411201122 - Akbar Satrio Nugroho
Deskripsi 	: Sebuah program yang bertujuan untuk menukar 
			  posisi sebuah string dan mencetak secara terbalik.
Tanggal 	: 15 Desember 2020
*/

#include <stdio.h>
#include <string.h>


int operasi(int Q){
	//deklarasi
	int i, A, B;
	char input[5];
	char tmp;
	
	//input data
	printf("Pilihlah Operasi Yang Akan Digunakan : ");
	scanf("%d", &Q);
	printf("Masukkan huruf anda disini : ");
	scanf("%5s", input);
	//algoritma
	if(Q==1){
		for (i = 1; i<= Q ;i++){
			scanf("%d %d", &A, &B);
		}
		tmp = input[A-1];
		input[A-1] = input[B-1];
		input[B-1] = tmp;	
		goto a;
	}else if(Q==2){
		a:
		int x = strlen(input);
 		for(int i=x-1;i>=0;i--){
  			printf("%c", input[i]);
 		}
	}else{
		printf("Operasi yang anda pilih salah!");
	}
}


int main (){
	//deklarasi
	int N, Q;
	
	//algoritma
	printf("Masukan Jumlah Karakter : ");
	scanf("%d", &N);
	operasi(Q);
}
