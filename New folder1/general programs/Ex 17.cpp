#include <iostream>
#include <string>
#include <sstream> 
using namespace std;
int main ()
{  
string str;  
do 
{    cout << "Enter passward: ";    cin>> str;  }

while (str!= "goodbye");
string mystr;
  float price;
  int quantity;
  cout << "Enter price: ";
  cin>> mystr;
  stringstream(mystr) >> price;
  cout << "Enter quantity: ";
  cin >> mystr;
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;
  return 0;
}

