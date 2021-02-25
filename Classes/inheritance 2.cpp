#include<iostream>
using namespace std;
const int limit=100;
class employee                       //base class
{
	private:
		char name[limit];
		unsigned long number ;
	public:
		void getdata()
		{
			cout<<"\nEnter the name ";
			cin>>name;
			cout<<"\nEnter the number";
		    cin>>number;
		}
		void putdata ()
		{
			cout<<"the name of employee is:"<<name<<endl;
			cout<<"the number of the employee is:"<<number<<endl;
		}
};
class manager:public employee                      //son class of employee class
{
	private:
		char title[limit];
		unsigned long dues;
	public:
	   	void getdata()
	   	{
	   		employee::getdata();              //call the function getdata of base class
	   		cout<<"\nEnter the title";
	   		cin>>title;
	   		cout<<"\nEnter the dues";
	   		cin>>dues;
		}
		void putdata()
		{
		   employee::putdata();	              //call the function putdata of base class
		   cout<<"the title of the manager is :"<<title<<endl;
		   cout<<"the dues of manager is :"<<dues<<endl; 	
		}
};
class scientist :public manager                  //son class of manager class 
{
	private:
		int pubs;
	public:
	   void getdata()
	   {
	   	  manager::getdata();              //call function from base class (manager class) which call the function from employee class
	   	  cout<<"\nEnter the pubs ";
	   	  cin>>pubs;
	   }
	   void putdata()
	   {
	   	  manager::putdata();                //call function freom the base class (manager class)
	   	  cout<<"The pubs of the scientist is:"<<pubs<<endl; 
	   }	
};
int main()
{
	scientist a;
	a.getdata();
	a.putdata();
	system("pause");
	return 0;
}

