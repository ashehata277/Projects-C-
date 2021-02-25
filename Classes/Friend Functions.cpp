#include<iostream>
using namespace std ;
/* Friend Functions */
class complex
{
     private:
	     double re ,im;
     public:
	     complex(double x=0.0,double y=0.0)
		 {
		  re=x;
		  im=y;
		 }
		 friend void get(complex&);
		 friend void show (complex);	 		  	
};
void get(complex& x1)
{
cin>> x1.re;
cin>>x1.im;	
}
void show(complex x2)
{
cout<<x2.re<<endl<<x2.im<<endl;	
}
int main()
{
complex x, y, z;
get(y);
show(y);
system("pause");
return 0;
}
