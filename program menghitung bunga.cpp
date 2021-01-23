/*
Program : MenghitungBunga
Author : 3411201122 Akbar Satrio Nugroho
Deskripsi : Program menghitung Perhitunghan Bunga di Bank
Tanggal : 5 November 2020
*/

#include<iostream>

int main(){
	
	// Masukan Data
	int X,P,T;
	int bunga,tabungan;

	// ALGORITMA
	printf("program menghitung bunga di Bank\n");
	printf("MASUKAN GAJI YANG ANDA DAPAT : \n");
	scanf("%d", &X);
	printf("MASUKAN BUNGA YANG ANDA DAPAT : \n");
	scanf("%d", &P);
	printf("BERAPA LAMA ANDA MENABUNG : \n");
	scanf("%d", &T);
	if ((X>=1&&X<=10000000)&&(P>=1&&P<=20)&&(T>=1&&T<=20))
	{
		bunga = (X * P / 100 * T);
		tabungan = X * 12;
		printf("BUNGA YANG ANDA DAPAT SEBESAR : %d\n", bunga);
		printf("TABUNGAN PERTAHUN ANDA ADALAH : %d", tabungan);
	}
	else
	{
		printf("Data anda salah!");
	}
}
