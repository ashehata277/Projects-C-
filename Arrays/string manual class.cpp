#include<iostream>
#include<cstring>         //for strcpy and strcat and strlen
using namespace std;
class String{
	  private:
	  	 enum{size=80};
	  	 char st[size];
	  public:
	     String()
		 {
		 st[0]='\0';	
		 }
		 String(char arr[])
		 {
		 strcpy(st,arr);	
		 }
		 void display()
		 {
		 cout<< st<<endl;	
		 }
		 void concat (String arr2)
		 {
		 if(strlen(st)+strlen(arr2.st)<size)
		   	{strcat(st,arr2.st);}
		 else
		 cout<< "string Too long";  
		 } 	
};
int main()
{
	String s1="hello ";     //uses constructor 2
	String s2="world!";     // uses constructor 1
	String s3;
	s1.display();
	s2.display();
	s3.display();         //display space
	s3=s1;               //assignment
	s3.concat(s2);
	s3.display();        //disdlay the concatenation
	system("pause");
	return 0;	
}
