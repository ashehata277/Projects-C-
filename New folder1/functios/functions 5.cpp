#include<iostream>
#include <cmath>
using namespace std;
int u(int r);
int main()
{int a;
cout<< "enter your number";
cin>> a;
cout<< "u("<< a<<") ="<< u(a);
return 0; 
}
int u(int r)
{
if (r==1)
return 1;
else if (r==0)
return 1;
else
return u(r-1)+u(r-2);
	
}
