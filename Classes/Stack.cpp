#include<iostream>
using namespace std ;
class stack 
{
	private:
		enum
		{
		 max= 10	
		};
		int st[max];
		int top;
	public:
		stack()
		{
		top=-1;	
		}
		bool isempty()
		{
		if(top==-1)
		return true;
		else
		return false;	
		}
		bool isfull ()
		{
		if(top==max-1)
		return true;
		else
		return false;	
		}
		void push(int x)
		{
		if(!(isfull()))
		st[++top]=x;
		else
		cout<<"Overflow.Stack is full\n";	
		}
		int pop()
		{
		if(!(isempty()))
	    return st[top--];
	    else
		{
		cout<<"Underflow.Stack is empty\n";
		return -1;
	    }
		}
};
int main()
    {
    	stack s1;
    	s1.push(10);
    	s1.push(30);
    	s1.push(40);
    	s1.push(100);
    	s1.push(150);
    	s1.push(160);
    	s1.push(170);
    	s1.push(170);
    	s1.push(170);
    	s1.push(170);
    	s1.push(170);
    	cout<<s1.pop()<<endl;
    	cout<<s1.pop()<<endl;
    	cout<<s1.pop()<<endl;
    	cout<<s1.pop()<<endl;
    	cout<<s1.pop()<<endl;
    	cout<<s1.pop()<<endl;
    	cout<<s1.pop()<<endl;
    	cout<<s1.pop()<<endl;
    	cout<<s1.pop()<<endl;
    	cout<<s1.pop()<<endl;
    	cout<<s1.pop()<<endl;
    	cout<<s1.pop()<<endl;
    	cout<<s1.pop()<<endl;
	    system("pause");
	    return 0;
	}
	
