#include<iostream>
using namespace std;
/* Function with pointers */
void custom(double*);
int main()
{
	double var=10.0;
	cout<<var<<endl;
	custom(&var);
	cout<<var<<endl;
	system("pause");
	return 0;
}
void custom(double* v)
{
	*v*=2.54;
}
