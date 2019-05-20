#include <iostream.h>
#include <conio.h>

main () {
			int n,i=1;
	float nilai,rata,jumlah=0;

   cout<<"input banyak nilai = ";cin>>n;
   while (i<=n)
   	{cout<<"input nilai "<<i<<" ="; cin>>nilai;
     jumlah=jumlah+nilai;
     rata=jumlah/n;
     i++;}
     cout<<"\n total nilai = "<<jumlah;
     cout<<"\n rata nilai = "<<rata;
     getch();}

