/*
Program : PerhitunganBonusPegawai
Author : 3411201122 Akbar Satrio Nugroho
Deskripsi : Program menghitung bonus yang didapatkan pegawai
Tanggal : 8 November 2020
*/

#include <iostream>

int main(){
	
	//deklarasi
	int kodepegawai,lamakerja,umur,bonus;
	
	//Algoritma
	printf("Perhitungan Bonus Pegawai \n");
	printf("Masukan kode pegawai : \n");
	scanf("%d", &kodepegawai);
	printf("Masukan masa kerja pegawai : \n");
	scanf("%d", &lamakerja);
	printf("Masukan umur pegawai : \n");
	scanf("%d", &umur);
	if ((kodepegawai==1))
	{
		if ((lamakerja>=5&&umur>=50))
		{
			bonus = 1000000;
			printf("bonus yang didapat : %d", bonus);
		}
		else if ((lamakerja<5))
		{
			bonus  = 500000;
			printf("bonus yang didapat : %d", bonus);
		}
		else 
		{
			bonus = 300000;
			printf("bonus yang didapat : %d", bonus);
		}
	}
	else if ((kodepegawai==2))
	{
		if ((lamakerja>=5&&umur>=50))
		{
			bonus = 400000;
			printf("bonus yang didapat : %d", bonus);
		}
		else if ((umur<50&&lamakerja>=5))
		{
			bonus = 250000;
			printf("bonus yang didapat : %d", bonus);
		}
		else if ((lamakerja<5&&umur<50))
		{
			bonus = 0;
			printf("bonus yang didapat : %d", bonus);
		}
		else 
		{
			bonus = 0;
			printf("bonus yang didapat : %d", bonus);
		}
	}
}

