#include <iostream>
#include <string>
#include <sstream> 
using namespace std;
int main () 
{
 float price;
int quantity;
string passward;
cout<< "enter the passward";
getline(cin,passward);
if (passward == "good bye")
{
cout<< "passward decoded\nenter the price";
cin>> price;
cout<< "enter the quantity";
cin>> quantity;
cout<< price*quantity;}
else
cout<< "the passward faild"; 
return 0;
	
}
