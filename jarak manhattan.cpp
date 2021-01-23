/*
Program : MenghitungJarakManhattan
Author : 3411201122 Akbar Satrio Nugroho
Deskripsi : Program menghitung Jarak Manhattan
Tanggal : 6 November 2020
*/

#include <iostream>

int main(){
	//input data
	int x1,x2,y1,y2,hasil1,hasil2;
	int cek1,cek2;
	
	//Algoritma
	printf("Jarak Manhattan \n");
	scanf("%d\n", &x1);
	scanf("%d\n", &y1);
	scanf("%d\n", &x2);
	scanf("%d", &y2);
	hasil1 = x1 - x2;
	hasil2 = y1 - y2;
	if((x1>=-100000&&x1<=100000)&&(y1>=-100000&&y1<=100000)&&(x2>=-100000&&x2<=100000)&&(y2>=-100000&&y2<=100000))
	{
		cek1= (-1 * hasil1)+(-1* hasil2);
		printf("%d\n", cek1);
	}
	else if (hasil1<0&&hasil2>0)
	{
		cek2 = 1 * (hasil1 + hasil2);
		printf("%d\n", cek2);
	}
}
