#include<stdio.h>

int main (){
	int A[10];
	int B[10];
	int i, count, total;
	char jawab;
	i=1; count=0; total=0;
	
	do{
		printf("Masukan angka disini : ");
		scanf("%d",&A[i]);
		printf("Lanjut Mengisi ?");
		printf("\nY/N : ");
		fflush(stdin);
		scanf("%c",&jawab);
		count++;
		i++;
	}while (jawab=='y');
	for (i=1;i<=count;i++){
		B[i] = A[i];
		printf ("%d ",B[i]);
	}
}
