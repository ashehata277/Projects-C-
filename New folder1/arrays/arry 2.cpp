#include<iostream>
using namespace std;
int main()
{int index=1;
float max;
float a [10];
for(int i=0;i<10;i++)
{cin>> a[i];
}	
max= a[0];
for(int i=1;i<10;i++)
if(a[i]>max){

max= a[i];
index=i+1;
	}	
cout<< "the maximum value ="<< max<< endl<< "it index= "<< index;
return 0;	
}
