#include <stdio.h>
#include <stdbool.h>
#define ndata 20

int main(){
	int i, j, k, n, m;
	int a[ndata];
	bool ketemu;
	
	printf("Masukan jumlah data Array : ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		printf("Masukan element array : ");
		scanf("%d", &a[i]);
	}
	
	printf("\nData yang dimasukan  : ");
	for(j=1;j<=n;j++){
		printf("%d\t", a[j]);
	}
	
	printf("\nMasukan data yang dicari : ");
	scanf("%d", &m);
	
	ketemu = false;
	for(k=1;k<=n;k++){
		if(a[k]==m){
			ketemu = true;
			printf("\nBilangan %d ditemukan pada indeks ke-%d", m,k);
		}
	}
	if(ketemu == false){
		printf("\nData tidak ditemukan!");
	}
	
	return 0;
}
