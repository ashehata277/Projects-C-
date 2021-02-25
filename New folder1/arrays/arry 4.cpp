#include<iostream>
using namespace std;
int sum (int ar[][4]);
int d (int a[][4]);
int main()
{
int arr[4][4];
for(int i=0;i<4;i++)
{for(int j=0;j<4;j++)
cin>> arr[i][j];
}
cout<<"the sum to elements of array="<< sum (arr)<<endl<<"the sum od the diagoul of array ="<<d (arr);	
return 0;
}
int sum (int ar[][4])
{int sum=0;
for(int i=0;i<4;i++)
{for(int j=0;j<4;j++)
sum+= ar[i][j];

}
return sum;	
}
int d(int a [][4])
{int sum1=a[0][0];
for(int i=0;i<4;i++)
{for(int j=0;j<4;j++)
if(i=j)
sum1+= a[i][j];
}
return sum1;
}
