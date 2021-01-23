#include <iostream>

void input(int a, int b){
	//deklarasi
	//algoritma
	printf("Masukan Nilai A : ");
	scanf("%d", &a);
	printf("Masukan Nilai B : ");
	scanf("%d", &b);
}
void algoritma (int a, int b){
	//deklarasi
	int temp;
	//algoritma
	temp = a;
	a = b;
	b = temp;
}
void cetak (int a, int b){
	//deklarasi
	void input(int a, int b);
	//Algoritma
	printf("=====HASIL=====\n");
	printf("Nilai A anda menjadi : %d\n", a);
	printf("Nilai B anda menjadi : %d", b);
}

int main (){
	//deklarasi
	void input(int a, int b);
	void algoritma (int a, int b);
	void cetak (int a, int b);
	//algoritma
	input (a,b);
	algoritma (a,b);
	cetak (a,b)
}
