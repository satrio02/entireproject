#include <stdio.h>
#include <conio.h>

int main(){
	int a,b,c,tinggi;

	printf("Masukkan Tinggi Segitiga : ");
	scanf("%d",&tinggi);
	printf("\n");
	printf("Berikut Tampilan Segitiganya\n");
	
	for(a=1; a<=tinggi; a++){
		for(c=tinggi; c>=a; c--)
			printf(" ");
			for(c=a;c<2*a;c++){
				b=c%10;
				printf("%d",b);
			}
		for(c=2*(a-1);c>=a; c--){
			b= c%10;
			printf("%d",b);
		}
		printf("\n");
	}
	getch();
}
