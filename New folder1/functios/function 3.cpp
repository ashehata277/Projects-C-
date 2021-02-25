#include<iostream>
using namespace std;
int factorial(int a);
int main()
{
int b ;
cout<< "enter your number";
cin>> b;
for(int i=1;i<=b;i++)
cout<< factorial(i)<< endl;
return 0;	
}
int factorial(int a)
{int fact=a;
for(int i=1;i<a;i++)
 fact=fact*i;
 return fact;
	
}
