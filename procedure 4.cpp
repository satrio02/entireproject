#include <iostream>

void bunga();

void bunga(){
	float a, A, i, n, f;
	float x=1;
	printf("Masukan jumlah uang : ");
	scanf("%f",&A);
	printf("Masukan persen bunga : ");
	scanf("%f",&i);
	printf("Disimpan berapa tahun : ");
	scanf("%f",&n);
	
	for(a=1;a<=n;a++){
	x=x*(1+(i*0,1));	
	}
	f=A*(x);
	printf("Total uang : %f",f);
}

int main(){
	bunga();
}
