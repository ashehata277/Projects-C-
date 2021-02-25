#include<iostream>
using namespace std;
class fraction 
{
private:
        int num;
		int den;
public:
       fraction()
	   {
	    num=0;
	    den=1;	
	   }
	    fraction(int x,int y)
	   {
	   	num=x;
		den=y;
		}  
	   void putdata()
	   {char a;
	   	cout<<"enter a fraction";
	   	cin>> num>>a>>den;
	   }
	   void showdata()
	   {
	   cout<<"the fraction = "<<num<<"/"<<den<<endl;
	   }
	   void sum1(const fraction x,const fraction y)
	   {
	   	num=x.num*y.den+x.den*y.num;
	   	den=x.den*y.num;
	   }
	   void sub(const fraction x,const fraction y)
	   {
	   	num=x.num*y.den-x.den*y.num;
	   	den=x.den*y.num;
	   }  		        
	   void mult(const fraction x,const fraction y)
	   {
	   	num=x.num*y.num;
	   	den=x.den*y.den;
	   }
	   fraction div(const fraction x)const
	   {
	   	fraction a;
	   	a.num=num*x.den;
	   	a.den=den*x.num;
	   	return a;
	   }   	
};
int main()
{
    fraction f1,f3;
    fraction f2(3,4);
    f1.putdata();
    f3.sum1(f1,f2);
    f3.showdata();
    f3.sub(f1,f2);
    f3.showdata();
    f3.mult(f1,f2);
    f3.showdata();
    f3=f1.div(f2);
    f3.showdata();
    return 0;
}
