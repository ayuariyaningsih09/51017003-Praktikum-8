#include <iostream.h>
#include <conio.h>

main (){
			int n,i=1;
		 float nilai,rata,jumlah=0;
       cout<<"input banyak nilai = ";cin>>n;
       do
       {cout<<"inputkan nilai "<<i<<" = "; cin>>nilai;
       jumlah=jumlah+nilai;
       rata=jumlah/n;
       i++;}
       while(i<=n);
       cout<<"\n total nilai = "<<jumlah;
       cout<<"\n rata nilai = "<<rata;
getch();}

