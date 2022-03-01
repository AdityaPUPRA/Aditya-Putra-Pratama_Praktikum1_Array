#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int b,i,data[100];
	float rata2,jumlah;
	
	
	cout<<"==================================="<<endl;
	cout<<"Masukkan Banyak Data ="; cin>>b;
	cout<<"\n";
	
	for (i=0;i<b;i++)
	{
		cout<<"Data["<<i+1<<"] = "; cin>>data[i];
		jumlah +=data[i];
	}
	
	rata2=jumlah/b;
	cout<<"\n";
	
	cout<<"Banyaknya Data = "<<b<<endl;
	cout<<"Rata-rata      = "<<rata2<<endl;
	cout<<"Jumlah         = "<<jumlah<<endl;
	cout<<"==================================="<<endl;
	
	getch();
	
}