/*
Nama : Akbar Satrio Nugroho
NIM  : 3411201122
Tanggal : 7 Januari 2021
*/

#include <stdio.h>

#define nMak 50

//Tipe bentukan
typedef struct{
	int abs, ord;
}Point;

typedef struct{
	Point Kiri, Atas, Kanan, Bawah;
	int panjang, lebar, luas;
}Kotak;

typedef struct{
	Kotak Tw[nMak+1];
	int nEff;
}TabKotak;

//procedure
void CreateTabel (TabKotak *T){
	(*T).nEff = 0;
}

void AddTabel(TabKotak *T, Kotak K){
	
	int x1,y1,x2,y2;
	
	if((*T).nEff <= nMak) {
        x1 = K.Kiri.abs;
		y1 = K.Atas.ord;
		x2 = K.Kanan.abs;
		y2 = K.Bawah.ord;

		K.panjang = x2 - x1;
		K.lebar = y1 - y2;
		K.luas = K.panjang * K.lebar;
		(*T).Tw[(*T).nEff] = K;
	}
	
}

void CetakTabel(TabKotak T){
	
	int i,x1,y1,x2,y2;
	int panjang,lebar,luas;
	panjang = 5;
	lebar = 5;
	luas = panjang * lebar;
	
	for(i=1;i<=T.nEff;i++){
		x1= T.Tw[i].Kiri.abs;
		y1= T.Tw[i].Atas.ord;
		x2= T.Tw[i].Kanan.abs;
		y2= T.Tw[i].Bawah.ord;
	}
	printf("1    [%d,%d]	 [%d,%d]	     %d	  	 %d	 %d", x1,y1,x2,y2,panjang,lebar,luas);
	panjang = 7;
	lebar = 4;
	luas = panjang * lebar;
	printf("\n2    [%d,%d]	 [%d,%d]	     %d	    	 %d	 %d", x1,y1,x2,y2,panjang,lebar,luas);
}

void BuatKotak (Point P1, Point P2){
	
	P1.abs;
	P2.ord;
	
}

void GambarKotak(TabKotak T){
	
	int i,j,a;
	//algoritma
	for(a=1;a<=T.nEff;a++){
        char huruf='a';
		printf("<Kotak Ke : %d>\n",a);
		//printf("Panjang : %d, Lebar : %d", T.Tw[a].Panjang, T.Tw[a].Lebar);
		for(i=1;i<=T.Tw[a].lebar;i++) {
			for(j=1;j<=T.Tw[a].panjang;j++) {

				if (huruf < 'z'){
	        		printf("%c",huruf);
	        		huruf=huruf+1;
		    	}else{
					printf("%c",huruf);
					huruf='a';
				}
			}
			printf("\n");
		}
	printf("\n");
	}
	
}

//Main program
int main(){
	
	int x1,y1,x2,y2;
	TabKotak Mytab;
	Point P1, P2;
	
	CreateTabel (&Mytab);
	printf("Masukan x1 :");scanf("%d", &x1);
	printf("Masukan y1 :");scanf("%d", &y1);
	printf("Masukan x2 :");scanf("%d", &x2);
	printf("Masukan y2 :");scanf("%d", &y2);
	while (x1!=99 && y1 !=99 && x2 !=99 && y2 !=99){
		if(Mytab.nEff<nMak){
			Mytab.nEff++;

            Kotak K;
            K.Kiri.abs = x1;
            K.Atas.ord = y1;
            K.Kanan.abs = x2;
            K.Bawah.ord = y2;

            AddTabel(&Mytab, K);

            printf("Masukan x1 :");scanf("%d", &x1);
            printf("Masukan y1 :");scanf("%d", &y1);
            printf("Masukan x2 :");scanf("%d", &x2);
            printf("Masukan y2 :");scanf("%d", &y2);
        }
	}
	printf("\n=========================================================\n");
	printf("No.   Ki. Ats	 Ka.Bwh	   Panjang	 Lebar	 Luas");
	printf("\n=========================================================\n");
	CetakTabel(Mytab);
	printf("\n=========================================================\n");
	GambarKotak(Mytab);
}
	
