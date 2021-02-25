#include<iostream>
using namespace std;
int main()
{
float sum=0;
float m[2][2];
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
cin>> m[i][j];
for(int i=0,j=0;j<2;j++)
{
if(j=0)
sum+=m[i][j]*((m[i+1][j+1]*m[i+2][j+2])-(m[i+1][j+2]*m[i+2][j+1]));
if(j=1)
sum+=(-1*m[i][j]*((m[i+1][j-1]*m[i+2][j+1])-(m[i+1][j+1]*m[i+2][j-1])));
if(j=2)
sum+=m[i][j]*((m[i+1][j-2]*m[i+2][j-1])-(m[i+1][j-1]*m[i+2][j-2]));
}
cout<< "sum="<< sum;
return 0;	
}

