#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int kode [5]= {001, 002, 003, 004, 005};
    string nama [5]= {"penghapus","pensil","buku","rautan","penggaris"};
    int jumlah [5]= {4,3,2,3,5};
    int harga [5]= {1000,1500,2000,1000,500};
    int total [5];
    int jumlahbarang= 0;
	int jumlahtotal= 0;
    
    
    cout<<"kode\tnama\t\tjumlah\tharga\ttotal"<<endl;
    for (int i=0;i<5;i++)
    {
       total[i]= jumlah[i]*harga[i];
         cout<< setfill ('0') << setw (3)<< kode[i] << "\t" << nama[i] << "    \t" << jumlah[i] << " \t" << harga[i] << "\t" << total[i] << endl;
         jumlahbarang= jumlahbarang+jumlah [i];
         jumlahtotal= jumlahtotal+total[i];
	}
	
	cout<<"\n";
	cout<<"Jumlah Item = "<<jumlahbarang<<endl;
	cout<<"Total Pembelian = "<<jumlahtotal<<endl;
	
}


