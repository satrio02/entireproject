#include "iostream"
#include "stdio.h"


int main(){
	int A[10];
	int i, count, total;
	
	printf("Masukan jumlah larik : ");
	scanf("%d", &A[10]);
	for (i=0;i<A[10];i++){
		printf("Masukan angka disini : ", i+1);
		scanf("%d", &A[i]);
		count++;
	}
	//hitung total data di array
	for (i=1;i<=count;i++){
		total=total+A[i];
	}
	printf("\ntotal : %d",total+1);
}
