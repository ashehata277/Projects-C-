#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{int x=1, y=1, z;
int i, n;
cout<< "enter the number";
cin>> n;
for(i=2;i<n;i++)
{z= x+y;
x= y;
y= z;
}
cout<< z;
return 0;	
}
