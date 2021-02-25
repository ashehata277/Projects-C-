/* how to dealing with arrays of character*/
#include<iostream>
using namespace std;
int main()
{
const int days =7;
const int size =10;
char arr[days] [size]={"sunday","monday","tuesday","wednesday","thursday","friday","sutarday"};
for(int i=0;i<days;i++)
cout<< arr[i]<< endl;
system ("pause");
return 0;	
}
