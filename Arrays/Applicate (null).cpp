/*For applicate the \0 and copy for strings*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{int i;
const int size =40;
char aar1[]="hello world ";
char arr2[size];
for(i=0;i<strlen(aar1);i++)     
arr2[i]=aar1[i];
arr2[i]='\0';
cout<< arr2<<endl;
system("pause");	
return 0;
}

