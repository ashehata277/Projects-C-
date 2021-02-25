#include<iostream>
#include<process.h>   //for exit()
using namespace std ;
class stack 
{
	protected:                   // not private
		enum
		{
		 max= 10	
		};
		int st[max];
		int top;
	public:
		stack()                //constructor
		{
		top=-1;	
		}
		void push(int value )              // to push 
		{
		st[++top]=value;	
		}
		int pop()                        //to pop
		{
		return(st[top--]);
		}
};
class stack2 :public stack                         // son class from base class (stack)
{
	public:
		void push(int value)
		{
		if(top>=max-1)
		{
		cout<<"stack is full\n"; exit(1);}
		stack::push(value);                     //call function from base stack	
		}
		int pop()
		{
		if(top<0 )
		{
		cout<<"stack is empty\n";  exit(1);}
		return stack::pop();	//call function from base stack 
		}	
};
int main()
{
	stack2 s;
	s.push(11);
	s.push(11);
	s.push(11);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	system ("pause");
	return 0;	
}
