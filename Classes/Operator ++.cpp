#include<iostream>
using namespace std;
class counter
{
	private:
	    int count;
    public:
	    counter()
	    {
	    count =0;	
		}
		counter(int a)
		{
		count =a;	
		}
		int retcount ()
		{
		return count;	
		}
		counter operator ++()
		{
		return counter(++count)	;
		}
		counter operator ++(int)
		{
		return counter (count++);	
		}
		counter operator + (counter c2)
		{
		 counter c3;
		 c3.count=count+c2.count;
		 return c3;	
		}		    	
};
int main()
{
counter c1, c2(4), c3;
cout<< c1.retcount();
cout<< c2.retcount();
++c1;
++c2;
++c1;
cout<<c1.retcount();
cout<<c2.retcount();
c1++;
c3=c1++;
cout<<c3.retcount();
c3=c1+c2;
cout<<c1.retcount();
cout<<c2.retcount();
cout<< c3.retcount();
system("pause");
return 0; 	
}
