#include<iostream>
#include<process.h>
using namespace std;
class safe_mat
{
      private:
        enum
		{
        size=100
		};
		int arr[size];
       public:
	    int& operator [](int index)
		{
		if(index<0 || index>100)
		{
		cout<<"This index Out of The range of the matrix";	
        exit(1);		
		}
	    return arr[index];
		}
};
int main()
{
safe_mat a;
for(int i=0;i<100;i++)
a[i]=i*10;
for (int j=0;j<100;j++)
{
int tem=a[j];
cout<< "Element is"<<j<<"="<<tem<<endl;	
}	
}	
