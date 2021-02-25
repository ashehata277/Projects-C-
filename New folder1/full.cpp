#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;
struct empolyee{
int eno;
string ename;
string job;
float salary;
float bouns;
float net_salary;	
};
void get_data(empolyee arr [],int size);
void set_bouns(empolyee& e, float perc);
void print (empolyee arr[],int size);
int main()
{
empolyee emps [5];
get_data(emps,5);
set_bouns(emps[1],0.10f);
print (emps,5);
return 0;
}
void get_data (empolyee arr [],int size)
{
for (int i=0;i<size;i++){	
cout<<"enter emp no, emp name, job for empolyee"<< i+1<<endl;
cin>> arr[i].eno >>arr[i].ename >> arr[i].job;
if (arr[i].job=="manager")
arr[i].salary=5000;
else if(arr[i].job=="engineer")
arr[i].salary=3000; 
else if (arr[i].job=="clerk")
arr[i].salary=2000;
else
arr[i].salary=1000;
}}
void set_bouns(empolyee& e, float perc)
{
e.bouns=e.salary*perc;
}
void print (empolyee arr[],int size)
{
	for(int i=0;i< size;i++)
	{
		cout<<"emo no="<< arr[i].eno<< endl;
		cout<<"emo name="<< arr[i].ename<< endl;
		cout<<"emo job="<< arr[i].job<< endl;
		cout<<"emo salary="<< arr[i].salary<< endl;
		cout<<"emo bouns="<< arr[i].bouns<< endl;
		cout<<"emo total salary="<< arr[i].salary+arr[i].bouns << endl;
		cout<<"************************************************************\n";
	}
}
