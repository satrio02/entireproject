#include <stdio.h>
#include <stdlib.h>

int main (){
	
	char jawaban, nama[100];
	int nilai;
	int i, counter;
	counter = 0;
	jawaban = 'y';
	
	while (jawaban == 'y'){
		printf("==================================================\n");
		printf("Masukan Nama Mahasiswa : ");
		scanf("%s", &nama[100]);fflush(stdin);
		printf("Masukan Nilai Mahasiswa : ");
		scanf("%c", &nilai);fflush(stdin);
		printf("==================================================\n");
		printf("\nmasih ada data mhsw ? (Y/N) : ");
		scanf("%c", &jawaban);fflush(stdin);
		printf("\n");
		counter++;
	}
	
	if(nilai <= 100 && nilai >= 80){
		printf("A");
	}else if(nilai <= 80 && nilai >= 60){
		printf("B");
	}else if(nilai <= 60 && nilai >= 40){
		printf("C");
	}else if(nilai <= 40 && nilai >= 20){
		printf("D");
	}else {
		printf("Masukan angka !");
	}
	
}
