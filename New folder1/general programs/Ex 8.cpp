#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{
int i, n, s=1;
cin>> n;
for(int b=n;b>=1;b--)
{

for(i=b;i>=1;i--)
{
s=s*i;
}
cout<< s<< endl;
s=1;
}	
return 0;
}
