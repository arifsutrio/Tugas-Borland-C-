#include<stdio.h>
#include<conio.h>
#include<iostream.h>

main()
{
char kode,jenis minuman,[17];
long harga=0;

	clrscr();
   cout<<endl<<"pembelian"<<endl;
   cout<<"Kode:";cin>>kode;
   cout<<"Jenis Minuman:";jenis;
   cout<<"Masukan Kode[1/2/3/4]:";
   cin>>kode;
   //proses seleksi kondisi
   else if(kode=='1')
   {
   	strcpy(jenis minuman,"Milo");
      harga=10000;
   }
   else if(kode=='2')
   {
   	strcpy(jenis minuman,"Kopi");
      harga=3000;
   }
   else if(kode=='3')
   {
   	strcpy(jenis minuman,"Teh Manis");
      harga=2500;
   }
   else if(kode=='4')
	{
   	strcpy(jenis minuman,"jus");
      harga=5000;
   }
   else
   {
   cout<<"salah kode"<<endl;
   }
//output datanya
	cout<<"Jenis Minuman="<<jenis<<endl;
   cout<<"Harga="<<harga<<endl;
   getch();
}
