#include <stdio.h>

void ketupat(){
 int n, i, j, s, x;
 printf ("Masukan lebar baris terpanjang : ");
 scanf ("%d",&n);
 x = n / 2;
 
 
 for (i = 1; i <= x; i++){
  for (j = x; j >= i; j--)
  printf (" ");
  
  for (s = 1; s <= i + (i - 1); s++)
  printf ("*");
  printf ("\n");
 }
 
  for (i = 0; i <= x; i++){
  for (j = 1; j <= i; j++)
  printf (" ");
  for (s = 0; s >= (i - x) ; s--)
  printf ("*");
  for (s = 1; s <= (x - i) ; s++)
  printf ("*");
  printf ("\n");
 }
}

int main(){
	ketupat();
	return 0;
}
