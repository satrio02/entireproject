/* 	
	program		: BismillahFixModul.c
	author 		: 3411181025, Ayu Peraiyantika
	deskripsi	: User diminta untuk memasukkan suatu bilangan hingga user telah memasukkan bilangan 999, 
	maka program akan menampilkan data - data yang dimasukkan oleh user sebelumnya dengan menggunakan procedure.
	Program ini memiliki 6 procedure, yaitu CreateTab, AddElm, CetakTab, CetakGanjil, CetakTabInvers,ElmAdd.
	Program ini memiliki 2 function, yaitu SumElm, CariElm.
	tanggal		: 21 Desember 2020
*/

#include <stdio.h>
#include <conio.h>
#define nMax 10
#include <stdbool.h>

//Pembentukan tipe

typedef struct
{
	int T [nMax+1];
	int neff;
} TabInt;

//Prototype

void CreateTab(TabInt *T);
/*
	i.s : T terdefinisi , belum diketahui
	f.s : T beberapa tabel kosong
*/

// Keterangan : I.S dan L.S wajib ditulis , kalau tidak nanti dinyatakan salah
	
void AddElm (TabInt *T, int x);
/*
	i.s : T terdefinisi sembarang, mungkin kosong
	f.s : T bertambah satu, elemen bernilai x
*/
	
void CetakTab (TabInt T);
/*
	i.s : T terdefinisi sembarang, tidak kosong
	f.s : Semua elemen T dicetak
*/

void CetakGanjil(TabInt T);
/*
	i.s : T terdefinisi sembarang, tidak kosong
	f.s : Semua elemen T yang bernilai ganjil dicetak
*/

void CetakTabInvers(TabInt T);
/*
	i.s : T terdefinisi sembarang, tidak kosong
	f.s : Semua elemen T dicetak dimulai dari index terakhir
*/

void ElmAdd (TabInt *T, int y);
/*
	i.s : T terdefinisi sembarang, mungkin kosong
	f.s : T bertambah satu, elemen bernilai x ditambahkan dengan y
*/

int SumElm (TabInt T);
//Mengirim penjumlahan nilai elemen T

int CariElm (TabInt, int x);
//Mengirim Indeks dari elemen bernilai x, jika ditemukan dan 0 jika x tidak ditemukan


// Main Driver

int main(){
	//coba untuk membuat main driver sendiri ya
	
	int idx,jum,x,y,N;
	int x1,y1,x2,y2;
	TabInt MyTab;
	
	CreateTab(&MyTab);
	printf("Masukan Bilangan : ");
	scanf("%d", &N);
	while (N!=999){
		AddElm(&MyTab, N);
		printf("Masukan Bilangan : ");
		scanf("%d", &N);
	}
	
	printf("\n!! Data Sebelum ditambah 5 !!");
	CetakTab(MyTab);
	CetakTabInvers(MyTab);
	CetakGanjil(MyTab);
	
	printf("\n\n!! Data setelah Ditambah 5 !!");
	ElmAdd(&MyTab, 5);
	CetakTab(MyTab);
	
	printf("\n\nMasukan Bilangan Yang Dicari 	: ");
	scanf("%d", &N);
	
	idx = CariElm (MyTab, N);
	if(idx != 0){
		printf("Bilangan %d, Ditemukan di Posisi Elemen ke : %d\n\n", N,idx);
	}
	else{
		printf("Data Tidak Ditemukan !\n\n");
	}
	
	SumElm(MyTab);
	
	return 0;
}
	
// Realisasi Prototype
void CreateTab(TabInt *T) // ubah ke bahasa c ya
{
	//(*T).neff <-- 0;
	
	(*T).neff = 0;
}

void AddElm (TabInt *T, int x) // ubah ke bahasa c ya
{
	/*
	if ((*T).neff<nMax) then 
		(*T).neff++;
		(*T).T[(*T).neff] <-- x;
	endif
	*/
	
	if((*T).neff<nMax){
		(*T).neff++;
		(*T).T[(*T).neff] = x;
	}
}

void CetakTab(TabInt T) // ubah ke bahasa c ya
{
	//Kamus Data 
	//i:integer;
	
	int i;
	
	// Algoritma
	
	/*
	output (" \n Data sebelum Di Invers : ");
	for (i=1 to T.neff) do
		output(" %d ", T.T[i]);
	*/
	
	printf(" \nData Yang Dimasukkan 		: ");
	for (i=1;i<=T.neff;i++){
		printf("%d ", T.T[i]);
	}
}

void CetakTabInvers(TabInt T)
{
	//Kamus Data 
	//i: integer
	
	int i;
	
	/*
	output (" \n Data yang dimasukkan\t: ");
	for (i=T.neff down to 1 ) do	
		output(" %d ", T.T[i]);
	*/
	
	printf(" \nData Setelah Diinvers\t 	: ");
	for (i=T.neff;i>=1;i--){
		printf("%d ", T.T[i]);
	}
}

void CetakGanjil(TabInt T)
{
	//coba ulik masing - masing ya --> hampir sama dengan cetak bilangan biasa
	
	int i;
	
	printf("\nData Bilangan Ganjil 		: ");
	for (i=2;i<=T.neff;i+=2){
		printf("%d ", T.T[i]);
	}
	/*for (i=7;i<=T.neff;i++){
		printf("%d ", T.T[i]);
	}*/
}

void ElmAdd (TabInt *T, int y)
{
	//coba ulik masing - masing ya --> hampir sama dengan penambahan elemen biasa tapi nilai y ditentukan = 5
	
	int i;
	
	for(i=1; i<=(*T).neff; i++){
		(*T).T[i] = (*T).T[i] + y;
	}
	
}

int SumElm (TabInt T)
{	
	//Kamus Data
	//jum, i : integer
	
	int i,jum;
	
	//Algoritma
	
	/*
	jum <-- 0;
	for(i=1 to T.neff) do
		jum <-- jum + T.T[i];
	endfor
	*/
	
	jum = 0;
	for (i=1;i<=T.neff;i++){
		jum = jum + T.T[i];
	}
	printf("Hasil Penjumlahan Setiap Elemen : %d", jum);

	//--> (jum)
	
	return jum;
}

int CariElm (TabInt T, int x)
{
	//Kamus Data
	
	/*
	i : integer
	ketemu : boolean
	*/
	
	int i;
	bool ketemu;
	
	//Algoritma
	
	/*
	ketemu <-- false;
	i <-- 1;
	
	while (i<=T.neff && !ketemu) do
		if(T.T[i] == x) then
			ketemu <-- true;
		endif
		
		else then
			i++;
		endif
	endwhile
	
	if(ketemu) then
		--> (i);
	endif
	
	else then
		return 0;
	endif*/
	
	ketemu = false;
	i = 1;
	
	while (i <= T.neff && !ketemu){
		if(T.T[i] == x){
			ketemu = true;
		}else{
			i++;
		}
	}
	if (ketemu){
		return (i);
	}else{
		return 0;
	}
}
