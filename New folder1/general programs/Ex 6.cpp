#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{
int n,j=0, sum=0;


do
{cout<< "enter the number";
cin>> n;
if(n>0)
{
sum=sum+n;
j++;
cout<< endl;
continue;
}
	
else if (n<0)
{
cout<< "error"<< endl;
continue;}
else
break;
}
while(true);

cout << "the sum"<< sum<<"the average"<< sum/j;
return 0;	
}
