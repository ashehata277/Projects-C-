#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
ofstream myfile("myfile",ios :: app);
if (myfile.is_open())
{myfile<< "this is a line"<<endl<<"this is another line";
myfile.close();

}
else
cout<<"open the file";
return 0;
}
