#include<iostream>
using namespace std;
void sum (float a,float& b);
float z= 0;
int main()
{
float x, y =0;
cout<< "enter the number ";
cin>> x;
if(x>0){

while(x>0)
{
sum(x,y);
cin>> x;
}
cout<< "the sum= "<< z<<endl << "the average="<< z/y;
}
else 
cout<< "no sum";
	
return 0;	
}

void sum(float a,float& b)
{
z+=a;
b++;	
}
