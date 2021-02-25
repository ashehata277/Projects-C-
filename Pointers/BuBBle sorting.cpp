#include<iostream>
using namespace std;
/*(passing by arrays)wiht the  bubble sort way to arrang the elements of array */
void order(int*,int*);
void sort(int*,int);
int main()
{
	const int n =5;
	int arr[n]={10,30,40,50,20};
	sort(arr,n);
	for(int i=0;i<n;i++ )
	cout<<arr[i]<<endl;
    system("pause");
    return 0;
	}
void order(int* a,int* b)
{
	int temp;
	if (*a>*b)
	{
		temp=*a;  
		*a=*b;    
		*b=temp; 
		
	}
	
}
void sort(int* c,int d)
{
  	for(int i=0;i<d-1;i++)
	{
		for(int j=i+1;j<d;j++)
		{
		order(c+i,c+j);
	    }
	}
}

