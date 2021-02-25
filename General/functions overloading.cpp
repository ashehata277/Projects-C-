#include<iostream>
using namespace std;
int power(int n,int m);
int main()
{
int a, b;
a=3;
b=4;
int x=power(a,b);
cout<< x<< endl;
system("pause");
return 0;	
}
int power(int n,int m)
{
if(n==0)
return 0;
if(m==0)
return 1;
return n*power(n,m-1);	
}

