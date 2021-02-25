#include <iostream>
#include <sstream>
#include<conio.h>
using namespace std;
int main ()
{
string str;  
do 
{    cout << "Enter passward: "; 
     cin>> str ; 
 
 
}

while (str!= "goodbye");
int x; float n;
cout<< "1-add 1"<< endl<< "2-multiply 2"<< endl << "3-subtract 4"<< endl<< "4-quit"<< endl;
cout<< "choice the process\n";
cin>> x;
while(x!= 4)
{
if(x!=4)
{
cout<< "enter the number\n";
cin>> n;	
switch(x)
{case 1:
cout<< n+1<< endl; break;
case 2:
cout<< n*2<< endl; break;
case 3:
cout<< n-4<< endl; break;
case 4:
cout<< endl;
cout<< "quitted";
break;
defualt :
cout<<"error the process not found\n"; break;
}}
else
break;
cout<< "1-add 1"<< endl<< "2-multiply 2"<< endl << "3-subtract 4"<< endl<< "4-quit"<< endl;
cout<< "choice the procces again\n ";
cin>> x;
}
cout<< "quitted\n";
return 0;	
}
