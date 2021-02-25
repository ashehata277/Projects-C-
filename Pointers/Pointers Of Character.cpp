#include<iostream>
using namespace std;
void show(char*);
int main()
{
	char str[]="defined as array";
	show(str);
	system("pause");
	return 0;
}
void show(char* a)
{   
	while(*a)
	{
	cout<<*(a++);
	
}
}

