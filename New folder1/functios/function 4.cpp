#include<iostream>
#include<cmath>
using namespace std;
int factorial (int d);
int main()
{int r;
cout<< "enter your number ";
cin>> r;
cout<<factorial(r)<< endl;	
}
int factorial(int d)
{
if (d==1)
return 1;
else
return d*factorial(d-1);	
}
