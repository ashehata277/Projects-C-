#include <iostream>
#include <cmath>
using namespace std;
int larger (int x,int y);
int main()
{int i, k;
cout<<"enter two your numbers";
cin>> i>> k;
cout<< "the largest is"<< larger(i,k);

return 0; 	
}
int larger (int x,int y)
{
int max;
if(x>y)
max = x;
else
max = y;
return max;	
}
