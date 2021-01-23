#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
    int i, n, data[1000];
    float rata,jum;
    
    cout<<"Masukan Jumlah banyak nya Data = ";
    cin>>n;
    cout<<endl;
    
    for (i=0; i<n; i++)
        {
           cout<<"Data ke-"<<i+1<<" = ";
           cin>>data[i];
           jum += data[i];
        }
        
    rata=jum/n;
        
    cout<<endl;
    cout<<"Nilai Rata-rata = "<<rata<<endl;
  getch();
  }
