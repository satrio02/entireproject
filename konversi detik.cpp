#include <stdio.h>
#include <conio.h>

int main()
{
	
	int detik,hd,jd,md ;
	printf("\n\n=====PROGRAM KONVERSI HARI, JAM, MENIT KE DETIK=====\n");
	printf("========BY DONI IRAWAN 311810530 STT 18 B2==========\n");
	printf("============INSTITUT PELITA BANGSA==================\n\n");
	printf("Masukan hari : "); 
	scanf("%d", &hd);
	detik=hd*24*60*60;
	printf("masukan jam : "); 
	scanf("%d", &jd);
	detik=jd*60*60;
	printf("hasilnya adalah = %d detik\n", detik);
	printf("\n====================================================\n\n");
	printf("masukan menit : "); 
	scanf("%d", &md);
	detik=md*60;
	printf("satu hari adalah = %d detik\n", detik);
	printf("hasilnya adalah = %d detik\n\n",detik);
	printf("=======Dimodifikasi oleh, Akbar Satrio Nugroho======\n\n");
	getch();
	
}
