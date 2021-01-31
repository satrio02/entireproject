#include <stdio.h>

int main (){
	int gajiAyah, gajiIbu, nGaji;
	
	printf("Masukan Penghasilan Ayah : ");
	scanf("%d", &gajiAyah);
	printf("Masukan Penghasilan Ibu : ");
	scanf("%d", &gajiIbu);
	
	if(gajiAyah < 1000000 && gajiIbu < 1000000){
		printf("UKT yang harus dibayarkan senilai : 2.500.000");
	}else if(gajiAyah >= 1000000 && gajiAyah < 2000000 && gajiIbu >= 1000000 && gajiIbu < 2000000){
		printf("UKT yang harus dibayarkan senilai : 3.000.000");
	}else if(gajiAyah >= 2000000 && gajiIbu >= 2000000){
		printf("UKT yang harus dibayarkan senilai : 4.000.000");
	}else if(gajiAyah < 1000000 && gajiIbu == 0){
		printf("UKT yang harus dibayarkan senilai : 1.500.000");
	}else if(gajiAyah >= 1000000 < 2000000 && gajiIbu == 0){
		printf("UKT yang harus dibayarkan senilai : 2.000.000");
	}else{
		printf("Data yang anda masukan salah!");
	}
	
	return 0;
}
