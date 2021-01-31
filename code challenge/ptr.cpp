#include <stdio.h>

void data(int *b){
	*b = (*b) * (*b);
}

int main (){
	int a = 10;
	int n;
	
	printf("Nilai a = \n", a);
	printf("Masukan Nilai = ");
	scanf("%d", &n);
	data(&n);
	printf("hasil : ");
	printf("%d", n);
	
	return 0;
}
