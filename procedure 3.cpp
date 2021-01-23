#include <stdio.h>
int main()
{
    int a[1000];
    int i,j,n,x; 
    printf("Masukan Jumlah banyak nya Data : ");
    scanf("%d",&n);
    for(i = 1 ; i <= n; i++ ){
        printf("Masukan Angka ke-%d : ",i);
        scanf("%d",&a[i]);
    }
    j = 9999 ; 
    for (i = 1 ; i <= n ; i++){ //
        if (a[i] < j){ 
            j = a[i]; 
        } else{ 
            a[i] = j;
            x = a[i] ;
            j = x;
        }
    }
    printf("Nilai terkecil adalah : %d ",j);
    return 0;
}
