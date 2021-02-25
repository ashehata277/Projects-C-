#include<iostream>
#include<sstream>
using namespace std;
int main()
{double n ,number=0;
char b[120*5];
char a;
cout<< "enter numbers of  elements of the statment \n ";
cin>> n;
cout<< "enter the letter which you want to search about \n";
cin>> a;
cout<< "enter the statment which need to sreach in \n";
cin>> b;
for(int j=0;j<n;j++)
{if(b[j]==a)
number ++;
}
cout<< "your letter repeated "<<number<< "times";
return 0;
}

