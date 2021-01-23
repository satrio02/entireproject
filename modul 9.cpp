/*
	Program 	: Menghitung_Jarak.c
	Author		: 3411181025, Ayu Peraiyantika
	Deskripsi	: User diminta untuk memasukkan x1, y1, x2, dan y2 sampai dengan user memasukkan angka 999 
	pada pengisian x1,y1,x2, dan y2. Maka program akan menampilkan titik x1,y1,x2, dan y2 dan program akan 
	menampilkan jarak dari titik - titik tersebut dengan menggunakan Procedure dan Function.
	Tanggal 	: 21 Desember 2020
*/

#include <stdio.h>
#include <conio.h>
#define nMax 10
#include <math.h> //untuk Menghitung Akar

typedef struct
{
	int abs, ord;
} Point;

typedef struct
{
	Point Pawal, Pakhir;
} Garis;

typedef struct
{
	Garis Tg[nMax+1];
	int neff;
} TabGaris;

//ProtoType	
void CreateTab (TabGaris *T);
void AddElmTab(TabGaris *T, Garis G);
void CetakTab (TabGaris T);
float PanjangGaris(TabGaris T, int x);


int main ()
{
	
	//Kamus Data
	/* 
	MyTab : TabGaris
	x1,y1,x2,y2 : integer
	G : Garis
	MyTab.neff <-- 0
	*/
	
	TabGaris MyTab;
	int x1,y1,x2,y2;
	Garis G;
	MyTab.neff = 0;
	
	//Algoritma
	
	/*
	1. Panggil Fungsi CreateTab
	2. Input x1, y1, x2, y2
	3. Ulangi masukkan data jika x1, y1, x2, dan y2 !=999
	*/
	
	CreateTab (&MyTab);
	
	while (x1!=999 && y1 !=999 && x2 !=999 && y2 !=999)
	{
		if(MyTab.neff<nMax){
			MyTab.neff++;
			MyTab.Tg[MyTab.neff].Pawal.abs=x1;
			MyTab.Tg[MyTab.neff].Pawal.ord=y1;
			MyTab.Tg[MyTab.neff].Pakhir.abs=x2;
			MyTab.Tg[MyTab.neff].Pakhir.ord=y2;
		}
		
		/*
		4. Input x1, y1, x2, y2
		*/
		printf("Masukan x1 :");scanf("%d", &x1);
		printf("Masukan y1 :");scanf("%d", &y1);
		printf("\n");
		printf("Masukan x2 :");scanf("%d", &x2);
		printf("Masukan y2 :");scanf("%d", &y2);
		printf("\n");
	}
	
	/* terjemahkan ya
	G.Pawal.abs <-- x1;
	G.Pawal.ord <-- y1;
	G.Pakhir.abs <-- x2;
	G.Pakhir.ord <-- y2;
	*/
	
	G.Pawal.abs = x1;
	G.Pawal.ord = y1;
	G.Pakhir.abs = x2;
	G.Pakhir.ord = y2;
	
	/*
	5. Panggil fungsi AddElmTab
	6. Panggil fungsi CetakTab
	*/
	
	AddElmTab(&MyTab, G);
	CetakTab(MyTab);
	
	return 0;
}

//Procedure

void CreateTab (TabGaris *T) //terjemahkan kedalam bahasa c ya
{
	//(*T).neff <-- 0
	(*T).neff = 0;
}

void AddElmTab (TabGaris *T, Garis G) //terjemahkan kedalam bahasa c ya
{
	/*
	if ((*T).neff<nMax) then
		(*T).neff++
		(*T).Tg[(*T).neff] <-- G	
	endif
	*/
	
	if ((*T).neff<nMax){
		(*T).neff++;
		(*T).Tg[(*T).neff] = G;
	}
	
}

void CetakTab (TabGaris T) // //terjemahkan kedalam bahasa c ya
{
	//Kamus Data
	//i, x1,x2,y1,y2 : integer
	//Pjg : float
	
	int i, x1,x2,y1,y2;
	float pjg;
	
	// Algoritma
	/*
	for(i=1 to T.neff) do
		x1 <-- T.Tg[i].Pawal.abs
		y1 <-- T.Tg[i].Pawal.ord
		x2 <-- T.Tg[i].Pakhir.abs
		y2 <-- T.Tg[i].Pakhir.ord
		
		if(x1!=999 && y1!=999 && x2!=999 && y2!=999) then
		output ("\n G [P1 (%d),(%d) , P2 (%d),(%d)]", x1,y1,x2,y2)
		Pjg <-- PanjangGaris (T,i)
		
		output("\n Panjang Garis : %2f", Pjg)
		output ("\n")
		}
	*/
	
	for (i=2;i<=T.neff;i++){
		x1 = T.Tg[i].Pawal.abs;
		y1 = T.Tg[i].Pawal.ord;
		x2 = T.Tg[i].Pakhir.abs;
		y2 = T.Tg[i].Pakhir.ord;
		if(x1!=999 && y1!=999 && x2!=999 && y2!=999){
			printf("\n G [P1 (%d),(%d) , P2 (%d),(%d)]", x1,y1,x2,y2);
			pjg = PanjangGaris (T,i);
			printf("\n Panjang Garis : %.2f", pjg);
			printf("\n");
		}
	}
	
}

float PanjangGaris(TabGaris T, int x)
{
	//x1,x2,y1,y2 : integer
	//jarak : float
	
	int x1,x2,y1,y2;
	float jarak;
	
	// Algoritma
	/*
		x1 <-- T.Tg[x].Pawal.abs
		y1 <-- T.Tg[x].Pawal.ord
		x2 <-- T.Tg[x].Pakhir.abs
		y2 <-- T.Tg[x].Pakhir.ord
	*/
	
	x1 = T.Tg[x].Pawal.abs;
	y1 = T.Tg[x].Pawal.ord;
	x2 = T.Tg[x].Pakhir.abs;
	y2 = T.Tg[x].Pakhir.ord;
		
	// Cari rumus untuk menghitung jarak ya masukkan ke variable jarak
	//	jarak = .... 
	
	jarak = sqrt ((y2-y1) * (y2-y1) + (x2-x1) * (x2-x1));
		
	//--> (jarak)
	return (jarak);
}

