#include <stdio.h>
#include <stdbool.h>
#define ndata 20

void cariIdx(int *m){
	
	bool ketemu;
	int n, a[ndata], k;
	
	ketemu = false;
	for(k=0;k<=n;k++){
		if(a[k]==*m){
			ketemu = true;
			printf("\nBilangan %d ditemukan pada indeks ke-%d", *m,k);
		}
	}
	if(ketemu == false){
		printf("\nData tidak ditemukan!");
	}
	
}

int main(){
	
	int i, j, k, n, m;
	int a[ndata];
	
	printf("Masukan jumlah data Array : ");
	scanf("%d", &n);
	
	for(i=0;i<=n;i++){
		printf("Masukan element array : ");
		scanf("%d", &a[i]);
	}
	
	printf("\nData yang dimasukan  : ");
	for(j=0;j<=n;j++){
		printf("%d\t", a[j]);
	}
	
	printf("\nMasukan data yang dicari : ");
	scanf("%d", &m);
	cariIdx(&m);
	
	return 0;
}
