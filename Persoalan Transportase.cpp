#include <stdio.h>
#include <iostream>

int main(){
	//Deklarasi
	int i,j,m,n;
	int matriks[100][100],transportase[100][100];
	printf("Masukan jumlah baris matriks : ");
	scanf("%d", &m);
	printf("Masukan jumlah kolom matriks : ");
	scanf("%d", &n);
	
	printf("Masukan elemen matriks :\n");
	for (i = 0; i < m; i++){
    	for (j = 0; j < n; j++){
		scanf(" %d", &matriks[i][j]);
    	}
 	}
  	for (i = 0; i < m; i++){
    	for (j = 0; j < n; j++){
      		transportase[j][i] = matriks[i][j];
   		}
  	}
  	printf("Hasil transportase matriks : \n");
  	for (i = 0; i < n; i++){
    	for (j = 0; j < m; j++){
			printf("%d ", transportase[i][j]);	
    	}
    	printf("\n");
  	}
	
	return 0;
}
