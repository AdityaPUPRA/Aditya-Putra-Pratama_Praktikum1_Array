#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
	int n,i,data1[5];
	float rata,sd;
	int jumlah=0;
	int sigma=0;
	
	cout<<"================================"<<endl;
	cout<<"\n";
	
	cout<<"Masukkan Data : "; cin>>n;
	cout<<"\n";
	
	for (i=0;i<n;i++)
	{
		cout<<"Data["<<i+1<<"] = "; cin>>data1[i];
		jumlah=jumlah+data1[i];
	}
	
	rata=jumlah/n;
	
	for(i=0;i<=n;i++)
	{
		sigma=sigma+(sqrt(data1[i]-rata),2);
		sd=sqrt(sigma/n);
	}
	
	cout<<"\n";
	cout<<"Jumlah    = "<<jumlah<<endl;
	cout<<"Rata-rata = "<<rata<<endl;
	cout<<"Sigma     = "<<sigma<<endl;
	cout<<"Sd        = "<<sd<<endl;
	
	getch();
}