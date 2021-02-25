#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{
int n, sum=125;
cout<< "enter the integer";
cin>> n;
for(int i=n;i>5;i--)
sum+= i*i*i;
for(int i=n;i<5;i++)
sum+= i*i*i;
cout<< sum;
return 0;	
	
}
