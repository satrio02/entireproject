#include <iostream>

void BilanganGenap(int n, int *h){
	*h=0;
	int i;
	for(i=1;i<=n;i++){
		if(i%2==0){
			*h = *h+1;
		}
	}
}

int main(){
	//deklarasi
	int n,h;
	void BilanganGenap(int n, int *h);
	//algoritma
	printf("Masukan angka : ");
	scanf("%d", &n);
	BilanganGenap(n, &h);
	printf("Jumlah bilangan genap : %d", h);
}
