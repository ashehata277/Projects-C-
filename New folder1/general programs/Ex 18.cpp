
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{
int num,small;
cin>>num;
small=num;
for(int i=0;i<9;i++)
{cout<<"enter the number";
cin>> num;
}
if(num<small)
 small =! num;
else
cout<<small;
return 0;}	
