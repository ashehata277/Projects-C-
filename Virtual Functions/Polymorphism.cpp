#include<iostream>
using namespace std;
/*polymorphism with virtual function*/
class father         //base class
{
	public:
		virtual void show()
		{
			cout<<"base";
		}
};
class derived :public father       //son class
{
	public:
		void show()
		{
			cout<<"derv 1";
		}
};
class derived2 :public father    //son class
{
	public:
		void show()
		{
			cout<<"derv 2";
		}
};
int main()
{
	derived v1;          //variable from son class
	derived2 v2;         //variable from another son class
	father* a;           //pointer to base class
	a=&v1;               //upcasting
	a->show();
	a=&v2;              //upcasting 
	a->show();
	father b;
	a=&b;            //to show function in base class
	a->show();
	system("pause");
	return 0;
}
