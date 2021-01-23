#include <stdio.h>

void bubbleSort(int arr[], int n, int *tmp){
  int i, j;
  for(i = 0; i < n; i++){
    for(j=0; j < n-i-1; j ++){
      if(arr[j] > arr[j+1]){
        *tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = *tmp;
      }
    }
  }
}

int main(){
	
	int i, j, temp, n;
	int array[20];
	
	printf("Masukan jumlah data Array : ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		printf("Masukan element array : ");
		scanf("%d", &array[i]);
	}
	printf("\nData yang dimasukan   : ");
	for(j=0;j<n;j++){
		printf("%d\t", array[j]);
	}
	bubbleSort(array, n, &temp);
	printf("\nHasil data pengurutan : ");
	for(i=0;i<n;i++){
		printf("%d\t", array[i]);
	}
	
	return 0;
}
