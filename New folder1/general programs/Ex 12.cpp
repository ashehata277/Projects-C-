#include<iostream>
using namespace std;
int main()
{
int i,n,k=1;
cin>> n;
for(int j=n;j>=1;j--){
if(j!=1)
{


for(i=2;i<j;i++)
{
if(j%i==0)
{k=0;break;
}
}
if(k==1)

cout<<i<< endl;
k=1;

}
else
cout<< "1";
}


		
return 0;
}

