#include<iostream>
using namespace std;
class counter
{
	 protected:
	 	unsigned int count;
	 public:
	    counter():count(0)   //constructor a
		{}
		counter(int c):count(c)  //constructor b
		{}
        unsigned int get()const   // to get data
		{
		return count;	
		}
		counter operator ++()   //incremental prefix
		{
		return(++count);	
		}			
};
class counter1:public counter
{
	public:
		counter1():counter()     //call constructor a from base class thats mean we can call a constructor from base class in son class by this way
		{}
		counter1(int c ):counter(c)   //call constructor b from base class 
		{}
		counter operator --()     // decremental prefix
		{
		return(--count);	
		} 
};
int main()
{
	counter1 a , b(200);   //object from base class
	cout<<a.get();
	cout<<b.get();
	++a;
	--b;                  // we can call functions frem base class inside son class 
	return 0;	
}

