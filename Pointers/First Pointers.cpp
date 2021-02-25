#include<iostream>
using namespace std;
int main()
{    /*Array is a constant pointer and the pointer is more flexable to we can equal the address of array to pointer and we can control in this pointer easy*/
	int arr[5]={10,20,30,40,50};
	for(int i=0;i<5;i++)
	cout<<*(arr+i)<<endl;
	cout<<arr<<endl;
	cout<<*arr<<endl;
	cout<<&arr[0]<<endl;
	system("pause"); 
	return 0;
}
