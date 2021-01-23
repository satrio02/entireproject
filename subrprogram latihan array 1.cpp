#include "iostream"
#include "stdio.h"

int HitungTotal(int total, int A[10]){
	int i, count;
	
	for (i=0;i<A[10];i++){
		printf("Masukan angka disini : ", i+1);
		scanf("%d", &A[i]);
		count++;
	}
	for (i=1;i<=count;i++){
		total=total+A[i];
	}
	printf("\ntotal : %d",total+1);
}

int main(){
	HitungTotal(Hasil, array);
}
