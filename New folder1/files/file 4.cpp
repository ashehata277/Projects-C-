#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;
int main()
{string x;
ifstream myfile("ManyCam");
if(myfile.is_open())
{while(10){

while(getline(myfile,x))
cout<< x<< "\n";
}}
else
cout<< "please open the file";
myfile.close();
return 0;		
}
