#include<iostream>
using namespace std;
class Base                        //abstract class
{
      protected  :
	      int height;
	      int width;
	  public:
	  void setvalue(int a,int b)
	  { 
	  	  height=a;
	  	  width=b;
	  }
	  virtual int show()=0;     //we dont need to the body of the function because we need this function for sons classes that called pure virtual function	  	
};
class rectangular : public Base
{
	  public :
	  	int show ()
	  	{
	  		return(height*width);
		}
};
class triangle: public Base
{
	public:
		int show ()
		{
			return(height*width/2);
		}
};
int main()
{
	rectangular d;
	triangle s;
	Base* a=&s;
	Base* b=&d;
    a->setvalue(4,5);
    b->setvalue(4,5);
	cout<<a->show()<<endl;
	cout<<b->show()<<endl;
   	system("pause");
	return 0;
} 
