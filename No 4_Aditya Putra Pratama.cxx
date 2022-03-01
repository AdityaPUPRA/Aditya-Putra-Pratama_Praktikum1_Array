#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i,j,p,w,baris,kolom,A[25][25],B[25][25],data1[25][25];
	
	cout<<"======================================="<<endl;
	cout<<"|          Perkalian Matriks           "<<endl;
	cout<<"======================================="<<endl;
	cout<<"\n";
	
	cout<<"| Masukkan Baris        : "; cin>>baris;
	cout<<"| Masukkan Kolom        : "; cin>>kolom;
	cout<<"\n";
	cout<<"-------------- Matriks A --------------"<<endl;
	cout<<"\n";
	for (i=0;i<baris;i++)
	{
		for (j=0;j<kolom;j++)
		{
			cout<<"| Masukkan (baris,kolom) ["<<i<<","<<j<<"] = "; cin>>A[i][j];
		}
	}
	cout<<"\n";
	cout<<"-------------- Matriks B --------------"<<endl;
	cout<<"\n";
	for (i=0;i<baris;i++)
	{
		for (j=0;j<kolom;j++)
		{
			cout<<"| Masukkan (baris,kolom) ["<<i<<","<<j<<"] = "; cin>>B[i][j];
		}
	}
	
	for (i=0;i<baris;i++)
	{
		for (j=0;j<kolom;j++)
		{
			data1[i][j]=0;
			for (p=0;p<kolom;p++)
			{
				w=A[i][p]*B[p][j];
				data1[i][j]=data1[i][j]+w;
			}
		}
	}
	cout<<"\n";
	cout<<"| Hasil Matriks A x B = "<<endl;
	for (i=0;i<baris;i++)
	{
		for (j=0;j<kolom;j++)
		{
			cout<<" "<<data1[i][j];
			cout<<"\t";
		}
		cout<<"\n";
	}
	
	getch();
}