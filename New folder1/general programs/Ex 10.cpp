#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{
int c, n, i;
cin>> n;
for(i=1;i<=n;i++)
{
for( c=1;c<i;c++)
cout<< " ";
int r=i;
for(r=1;r<=n+1-i;r++)
cout<< "* " ;
cout<< endl;
}
return 0;	
}
