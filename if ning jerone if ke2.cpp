#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
char kode pesawat,nama pesawat,kelas pesawat,harga tiket pesawat[20];
long harga=0;

clrscr();
cout<<"Kode Pesawat:";cin>>kode;
cout<<"Nama Pesawat:";cin>>nama;
cout<<"Kelas Pesawat:";cin>>kelas;
cout<<"Harga Tiket Pesawat:";harga tiket;
if(kode=='1')
	{
	stcpy(kode pesawat,"MPT");
	if(kode=='MPT'||kode =='1')
   harga=1500000;
   else
   harga=2000000;
   }
   else if(kode=='2')
   {
   strcpy(kode pesawat,"MPT");
   if(kode=='MPT'||kode =='2')
   harga=900000;
   else
   harga=990000;
   }
   else if(kode=='3')
   {
   strcpy(kode pesawat,"MPT");
   if(kode=='MPT'||kode =='3')
   harga=500000;
   else
   harga=550000;
   }
   else if(kode=='1')
   {
   strcpy(kode pesawat,"GRD");
   if(kode=='GRD'||kode =='1')
   harga=1200000;
   else
   harga=1220000;
   }
   else if(kode=='2')
   {
   strcpy(kode pesawat,"GRD");
   if(kode=='GRD'||kode =='2')
   harga=800000;
   else
   harga=880000;
   }
   else if(kode=='3')
   {
   strcpy(kode pesawat,"GRD");
   if(kode=='GRD'||kode =='3')
   harga=400000;
   else
   harga=440000;
   }
   else if(kode=='1')
   {
   strcpy(kode pesawat,"BTV");
   if(kode=='BTV'||kode=='1')
   harga=1000000;
   else
   harga=1100000;
   }
   else if(kode=='2')
   {
   strcpy(kode pesawat,"BTV");
   if(kode=='BTV'||kode=='2')
   harga=700000;
   else
   harga=770000;
   }
   else if(kode=='3')
   {
   strcpy(kode pesawat,"BTV");
   if(kode=='BTV'||kode=='3')
   harga=300000;
   else
   harga=330000;
   }
   else
   cout<<"Salah Kode Pesawat"<<endl;

   cout<<"--------------------"<<endl;
   cout<<"Nama Pesawat:"<<nama<<endl;
   cout<<"Kelas Pesawat:"<<kelas<<endl;
   cout<<"Harga Tiket:"<<harga<<endl;
   getch();
}





