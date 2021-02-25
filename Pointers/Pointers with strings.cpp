#include<iostream>
#include<cstring>        //for strlen and strcpy 
using namespace std;
class String
{
	private:
		char* str;
	public:
	    String(char* s)              //contructor
		{
			int lenght=strlen(s);
			s=new char [lenght+1];       // reserve the space in momery has the same size of the private array 
			strcpy(str,s); 
		}
		~String()                     //destructor
		{
			cout<<"the string is deleted";
			delete[]str;                     //delete the array from momery or release momery  
		}
		void display()
		{
		    cout<< "the string is :"<<str;      //show the string 
		}	
};
int main()                    // start the main 
{
	String s1("Welcome to C++");
	String* s2;
	s2=new String("Ahmed Mohamed Shehata");
    s1.display();
    delete s2;
	system("pause");
	return 0;
}
