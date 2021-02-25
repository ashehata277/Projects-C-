#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
ofstream myfile ("myfile");
if(myfile.is_open())
{myfile<<"hello";
myfile.close();
}	
else
cout<<"open the file";
return 0;
}
