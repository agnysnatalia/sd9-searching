#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int i;
  int n;
  int cari,ketemu=0;
  int angka[100];
  
  cout<<"PENCARIAN ANGKA\n";
  cout<<endl;
  cout<<"Masukan Banyak Angka : ";
  cin>>n;
  cout<<endl;

  for (i=1;i<=n;i++)
  {
	cout<<"Masukan angka ke - "<<i<<" = ";
	cin>>angka[i];
  }
  cout<<endl;
  cout<<"Data yang ingin dicari : ";
  cin>>cari;
  cout<<endl;
  
  for(i=0;i<=n;i++)
  {
	  if (angka[i]==cari)
	  {
		  ketemu=1;
		  cout<<"Angka " <<cari<< " ditemukan pada posisi ke "<<i;
	  }
  }
  if (ketemu==0)
  {
  	cout<<"Maaf data yang dicari tidak ada";
  }
  getch();
  }
