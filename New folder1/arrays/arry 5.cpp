#include<iostream>
using namespace std;
int main()
{
int x[3][3]={10,15,16,20,21,5,6,3,7};
int  y[3][3];
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
y[j][i]=x[i][j];	
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
x[i][j]=y[i][j];
}
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
{
cout<< x[i][j];	
cout<<"\n";}
return 0;

}
