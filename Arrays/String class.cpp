#include<iostream>
#include<string>    //for string class 
using namespace std;
int main()
{
string s1="Man ";
string s2="Beast";
string s3;
s3=s1;        //assign and without the library cant write that
cout<< s3<<endl;
s3= "neither "+s1+" nor ";  //concatenate
s3+=s2;                     //concatenate
cout<< s3<< endl;
s1.swap(s2);
cout<<s1<<"nor"<<s2<<endl;
system ("pause");
return 0;	
}
