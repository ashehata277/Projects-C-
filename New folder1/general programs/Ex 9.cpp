#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{
int i, n, c;
cin>> n;
for(i=1;i<=n;i++)
{
for(c=1;c<=i;c++)
cout<< "*";	
cout<< endl;	
	}	
	return 0;
}
