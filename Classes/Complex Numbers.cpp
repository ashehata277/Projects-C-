#include<iostream>
#include<cmath>
#include<process.h>     //for exit()
using namespace std ;
class complex
{
	private:
		enum{size=100};
		double re ,im;
		int arr[size];
	public:
	    complex()              //constructor a
		{
		im=0;
		re=0;	
		}
		complex(double x,double y)    //constructor b
		{
		re=x;
		im=y;	
		}
		~complex()                    //destructor
		{
		cout<<"This Object Is Dead\n";	
		}
		void getdata()           
		{
		cout<<"Enter The Complex Number/real part first/imginary part second\n";
		cin>>re;
		cin>>im;	
		}
		void showdata()
		{
		cout<<"the Complex Number is "<<"("<<re<<","<<im<<")"<<endl;	
		}
		void add(complex f,complex g)
		{
		re=f.re+g.re;
		im=f.im+g.im;	
		}
		void sub(complex s,complex z)
		{
		re=s.re-z.re;
		im=s.im-z.im;	
		}
		void mult(complex a,complex b)
		{
		re=(a.re*b.re)-(a.im*b.im);
		im=(a.re*b.im)+(a.im*b.re);	
		}
		void div(complex i,complex j)
		{
		double k;
		k=(i.re*j.re)+(i.im*j.im);
		re=((i.re*j.re)-(i.im*j.im))/k;
		im=((i.re*j.im)+(i.im*j.re))/k;	
		}
		double mag()
		{
		double y;
		y=sqrt(re*re+im*im);
		return y;	
		}
		complex operator+ (complex z)       // this function to add two objects 
		{
		complex q;
		q.re=re+z.re;
		q.im=im+z.im;
		return q;	
		}
		complex operator -(complex d)      //this function to substract two objects 
		{
		complex m;
		m.re=re-d.re;
		m.im=im-d.im;
		return m;	
		}	
		complex operator *(complex a1)      //this function to multply tw objects 
		{
		complex a2;
		a2.re=(re*a1.re)-(im*a1.im);
		a2.im=(re*a1.im)+(im*a1.re);
		return a2;	
		}
		complex operator /(complex b1 )     //this function to divangerence two objects 
		{
		double a;
		complex b3, b2;
		b3.re=b1.re;
		b3.im=(-1)*b1.im;
		a=(re*b1.re)+(im*b1.im);
		b2.re=((re*b3.re)-(im*b3.im))/a;
		b2.im=((re*b3.im)+(im*b3.re))/a;	
		return b2;
		}
		bool operator >(complex a2)     //the six function to comparsion 
		{
		return (mag()>a2.mag());
		}
		bool operator <( complex a3)
		{
		return (mag()<a3.mag());	
		}
		bool operator <=(complex a3)
		{
		return (mag()<=a3.mag());	
		}
		bool operator >=(complex a3)
		{
		return (mag()>=a3.mag());	
		}
		bool operator ==( complex a3)
		{
		return (mag()==a3.mag());	
		}
		bool operator !=( complex a3)
		{
		return (mag()!=a3.mag());	
		}
		void operator =(const complex c4)
		{
		re=c4.re;
		im=c4.im;	
		}
		void operator +=(complex c5)
		{
		re=re+c5.re;
		im=im+c5.im;	
		}
		void operator -=(complex c6)
		{
		re=re-c6.re;
		im=im-c6.im;	
		}
		void operator *=(complex c7)
		{
		re=((re*c7.re)-(im*c7.im));	
		im=((re*c7.im)+(im*c7.re));
		}
		void operator /=(const complex c8)
		{
		double a;
		complex c9;
		c9.re=c8.re;
		c9.im=(-1)*c8.im;
		a=(c8.re*c8.re)+(c8.im*c8.im);
		re=(re*c9.re)-(im*c9.im)/a;
		im=(re*c9.im)+(im*c9.re)/a;	
		}
		int& operator [](int index)   // this function to make matrix to object
		{
		if(index<0 || index>100)
		{
		cout<<"This index Out of The range of the matrix";	
        exit(1);		
		}
	    return arr[index];
		}
		/*istream& operator >>(istream& sin,complex y)
		{
		cout<<"Enter Real Part";
		sin>>y.re;
		cout<<"Enter The Imaginary Part";
		sin>>y.im;
		return sin;
		}
		ostream& operator<< (ostream& sout,complex x)
		{
		sout<<"the complex number ="<<"("<<x.re<<","<<x.im<<")"<<endl;
		return sout;
		}*/				
friend istream& operator >> (istream& sin,complex&);
friend ostream& operator << (ostream& sout,complex&);
};
istream&operator >>(istream& sin,complex& y)   // this function to cin  and cout with object 
{
cout<<"Enter The Real Number\n";
sin>>y.re;
cout<<"Enter The Imaginary Number\n";
sin>>y.im;	
}
ostream& operator<< (ostream& sout,complex& x)
{
sout<<"the complex number ="<<"("<<x.re<<","<<x.im<<")"<<endl;
return sout;
}
int main()
{
complex c1, c2, c3;
c1.getdata();
cin>> c2;
cout<< c2;
c3.add(c1,c2);
c3.showdata();
c3.sub(c1,c2);
c3.showdata();
c3.mult(c1,c2);
c3.showdata();
c3.div(c1,c2);
c3.showdata();
c3=c1+c2;
c3.showdata();
c3=c1-c2;
c3.showdata();
c3=c1*c2;
c3.showdata();
c3=c1/c2;
c3.showdata();
double f= c3.mag();
c1+=c2;
c1-=c2;
c1*=c2;
cout<< "The magnitude For The Number is"<< f<<endl;
if (c1>c2)
cout<<"c1 Is Greater Than c2";
else 
cout<<"c1 Is Smaller Than Or Equal c2 ";
c1=c2;
if (c1==c2)
cout<<"the two objects is equal";
if(c1!=c2)
cout<<"the two object is not equal";
system("pause");
return 0;
}
