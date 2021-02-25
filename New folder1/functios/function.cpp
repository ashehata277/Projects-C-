#include<iostream>
#include<cmath>
using namespace std;
double area(double x);
double volume(double y);
int main()
{
double i;
cout<< "enter the radius ";
cin>> i;
cout<< "the area of sphere"<< area(i)<< endl;
cout<< "the volume of sphere"<< volume(i);
return 0;	
}
double area(double x)
{double k;
k= 3.14*4*pow(x,2);
return k;
}
double volume(double y)
{double d;
d=3.14*(4/3)*pow(y,3);
return d;

}
