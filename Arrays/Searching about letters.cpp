/*search for  letter in statment*/
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main ()
{int b=0;
const int size=200;
char a;
char arr[size];
cout<<"enter your letter You need to search about";
cin>> a;
cout<<"enter Your statment";
cin.get(arr,size,'@');
for(int i=0;i<strlen(arr);i++)
{
if(a==arr[i])
{
b++;	
}
}
cout<<"Your letter repeated "<< b<< "Times\n";
system("pause");
return 0;	
}
