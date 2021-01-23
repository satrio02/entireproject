/*
Program : MenghitungBeratBadan
Author : 3411201122 Akbar Satrio Nugroho
Deskripsi : Program menghitung berat badan rata-rata
Tanggal : 5 November 2020
*/

#include<iostream>

int main(){
	
	// Masukan Data
	float A,B,C,D,E,F;
	float Beratbadan;

	// ALGORITMA
	printf("Program menghitung Berat badan rata-rata\nMasukan berat badan :\n");
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	scanf("%f", &D);
	scanf("%f", &E);
	scanf("%f", &F);
	if (((A>=50)&&(A<=100)&&(B>=50)&&(B<=100)&&(C>=50)&&(C<=100)&&(D>=50)&&(D<=100)&&(E>=50)&&(E<=100)&&(F>=50)&&(F<=100)))
	{
		Beratbadan = (A+B+C+D+E+F)/6;
		printf("Rata-rata berat badan : %f", Beratbadan);
	}
	else 
	{
		printf("ada data yang salah!");
	}
}
