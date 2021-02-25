#include<iostream>
using namespace std;
void call();
int i=1;           //global variable
int main()
{
int b=1;           //local variable
    
	for(int j=0;j<=9;j++)
	{
	if(b==i)
	{
	cout<<"the function called"<< i<< "times\n";	
	call();
    b++;
	}
	}

system ("pause");
return 0;	
}
void call()
{
i++;	
}
