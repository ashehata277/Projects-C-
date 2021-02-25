#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{char s;
char b[70];
int number=-1;
string x;
ifstream myfile("myfile");
if(myfile.is_open())
{
cout<<"enter the letter which you want search about";
cin>> s;	
while(getline(myfile,x))
{
for(int i=0;i<70;i++)
b[i]=x[i];	
for(int j=0;j<70;j++)
{if(b[j]==s)
number ++;}
}
cout<< "your letter repeated "<<number<< "times";
myfile.close();
}
else
cout<<"open the file";
return 0;	
}
