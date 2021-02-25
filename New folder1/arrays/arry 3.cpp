#include<iostream>
#include<cmath>
using namespace std;
bool searcher(int arr[],int size,int searcheditem );
int main()
{int arr[]={5,10,15,20,30,35,40};
int searcheditem;
cout<<"enter your item ";
cin>> searcheditem ;
searcher(arr,7,searcheditem);
if(searcher(arr,7,searcheditem)==true)
cout<<"the item is found";
else
cout<< "the item is not found";	
}
bool searcher(int arr[],int size,int searcheditem )
{
bool found=false;
for(int i=0;i<size;i++)
{if (arr[i]== searcheditem)
found=true;
}	
return found;	
}
