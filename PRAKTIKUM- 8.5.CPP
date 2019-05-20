#include <iostream.h>
#include <conio.h>

main (){
int pil;

menu :
cout<<"Menu :";
cout<<"\n[1] Tambah";
cout<<"\n[2] kurang";
cout<<"\n[3] bagi";
cout<<"\n[4] kali";
cout<<"\n[5] modulo";

cout<<"\n input pilihan :";
cin>> pil;

if(pil==1)

	{int a,b,c,jawab;
cout<<"input angka 1 : ";cin >>a;
cout<<"input angka 2 : ";cin >>b;
c=a+b;
cout<<"input hasil jumlahnya : "<<cin;
cout<<"\n ingin kembali ke menu? ";cin>>jawab;
if(jawab==1)
{clrscr();
goto menu ;}
else if (jawab==0)
	cout<<"makasih";}
   getch();}
