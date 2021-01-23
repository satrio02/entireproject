#include "iostream"
#include "stdio.h"

typedef struct{
	int ar;
}Nilaiar;

int main(){
	Nilaiar B[5];
	
	B[1].ar = 3;
	B[2].ar = 4;
	B[3].ar = 1;
	B[4].ar = 5;
	B[5].ar = 2;
	printf("isi data array ke  1 : %d\n", B[1]);
	printf("isi data array ke  2 : %d\n", B[2]);
	printf("isi data array ke  3 : %d\n", B[3]);
	printf("isi data array ke  4 : %d\n", B[4]);
	printf("isi data array ke  5 : %d\n", B[5]);
	
}
