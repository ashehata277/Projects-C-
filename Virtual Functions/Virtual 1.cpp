#include<iostream>
using namespace std;
class beta;
class alpha 
{
	private:
		 int data;
	public:
		alpha()
		{
			data=3;
		}
	    friend int sum(alpha a,beta b );
	
};
class beta 
{
	private:
		int data;
	public:
		beta ()
		{
			data=5;
		}
	    friend int sum(alpha a,beta b);
};
int sum(alpha a,beta b)
{
	return(a.data+b.data);
}
int main()
{
	alpha x;
	beta y;
    int a=sum(x,y);
    cout<<a;
    system("pause");
	return 0;
}
