#include <iostream>
#include <stdbool.h>

int main(){
	//Deklarasi
	int modus[100];
	int n,i,j,jmodus,tmp,hasil;
	int JumlahModusAwal,KandidatModus,JumlahKandidatModus,HasilModus;
	bool sama;
	
	//Input Data
	printf("Masukan Jumlah data : ");
	scanf("%d", &n);
	
	//Algoritma
	for (i=0;i<n;i++){
		printf("Masukan Data %d : ", i+1);
		scanf("%d", &modus[i]);
	}
	for (i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(modus[j]<modus[i]){
				tmp = modus[i];
				modus[i] = modus[j];
				modus[j] = tmp;
			}
		}
	}
	JumlahModusAwal=0;
	i=0;
	while(i<n){
		KandidatModus = modus[i];
		JumlahKandidatModus = 1;
		i++;
		sama = true;
		while(sama &&i<n){
			if(modus[i]==KandidatModus){
				JumlahKandidatModus = JumlahKandidatModus + 1;
				sama = true;
				i++;
			}else{
				sama = false;
			}
		}
	}
	if(JumlahKandidatModus >= JumlahModusAwal){
		HasilModus = KandidatModus;
		JumlahModusAwal = JumlahKandidatModus;
	}
	printf("Nilai Data Terbesar adalah : ");
	printf("%d\n", HasilModus);
	
	return 0;
}
