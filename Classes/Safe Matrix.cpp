
#include<iostream>
#include<process.h>            // For exit()
using namespace std;
class safe_array
{
	private :
		enum
		{
		size=100	
		};
		int arr[size];
	public:
		void put_num(int index ,int value )                       
		{
		if(index<0 || index>100)
		{
		cout<<"This index Out of The range of the matrix\n";
		exit(1);	
		}
		arr[index]=value;	
		}
		int get(int index)
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
safe_array a;
for(int i=0;i<100;i++)
a.put_num(i,i*10);
for (int j=0;j<100;j++)
{
int tem=a.get(j);
cout<< tem <<endl;	
}	
system("pause");
return 0;
}


