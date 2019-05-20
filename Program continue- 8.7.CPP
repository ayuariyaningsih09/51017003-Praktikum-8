#include <iostream.h>
#include <conio.h>

int main (void)
{
int jumlah=0;
int bilangan;
for (bilangan =1;bilangan <=5;bilangan++)
{
if (bilangan==3|| bilangan ==4) continue;
jumlah += bilangan ;
}
cout << "<<deret'; bilan
<<"bilan' ; 1+2+4 ; <<"bilangan<<endl;
cout<<"jumlah deret bilangan = "<<jumlah;
getch();
return 0;
}
