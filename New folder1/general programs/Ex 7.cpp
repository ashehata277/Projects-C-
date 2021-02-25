#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{
int x=3, y=2, z, sum= 0, i , n;
cin>> n;
for(i=2;i<n;i++)
{z= i*y+(i+1)*x+i;
x= y;
y= z;
sum= sum+z;	}
cout<< z<< endl<< sum<< endl;	
}
