#include<iostream>
using namespace std;
int main()
{
int a, u, n;
cin>> u;// cin>> a;
n=0;
//u=a;
while(u!=1)
{
	
if(u%2==0)
u=u/2;
else
u=3*u+1;
n++;
cout<<"u("<<n<<")="<<u << endl;

}
return 0; 	
	}	

