#include<iostream>
#include<conio.h>
#include<sstream>
using namespace std;
void getachar();
void putachar();
char a='a';
int main()
{
cout<<"Enter Passward\n";
while(a!='\r')
{
getachar();
putachar();
}
cout<<"\n";
system("pause");
return 0;
}	
void getachar()
{
a=getch();		
}
void putachar ()
{
cout<< "*";
}

