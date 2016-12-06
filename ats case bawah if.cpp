#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char kode,lagi;
atas:
clrscr();
cout<<"INPUT KODE BUKU[1..3]:";cin>>kode;
cout<<"Harga:";cin>>harga;
kode=getche();
cout<<'\n';
switch(kode)
			{
         case'1':
         case'1':
         cout<<"Sukses Belajar";
	break;
			case'2':
			case'2':
   		cout<<"Kunci Pribadi";
   break;
   		case'3':
   		case'3':
   		cout<<"Mencari Mutiara";
   break;

Clrscr();
cout<<"Kode Buku:";cin>>kode;
cout<<"Nama	:";cin>>nama;
if(kode=='1')
	{
   strcpy(nama,"Sukses Belajar");
   if(kode=='1'||nama=='Sukses Belajar')
   harga=50000;
   else
   harga=55000;
   }
	else if(kode=='2')
   {
   strcpy(nama,"Kunci Pribadi");
   if(kode=='2'||nama=='Kunci Pribadi')
   harga=35000;
   else
   harga=40000;
   }
   else if(kode=='3')
   {
   strcpy(nama,"Mencari Mutiara");
   if(kode=='3'||nama=='Mencari Mutiara')
   harga=45000;
   else
   harga=46000;
   }
   else
   cout<<"
