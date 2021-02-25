#include<iostream>
#include<cmath>
using namespace std;
void swap (int& x,int& y);
int main()
{
int j=10 ,k=15;
swap(j,k);
cout<< j<< k;
return 0; 	
}
void swap(int& x, int& y)
{
int r;
r=x;
x=y;
y=r;
	
}
