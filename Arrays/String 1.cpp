/*application to informations about strings */
#include<iostream>
#include<cstring>
using namespace std;
class part{
      private:
	        char partname[30];
			double cost;
			int partnumber;
	  public:
	        void setpart (char part[],int num ,double c)
			{
			strcpy(partname,part);
			cost =c;
			partnumber= num;	
			}
			void showpart()
			{
			cout<<"partner name :"<<partname;
			cout<<"cost="<< cost;
			cout<<"number"<<partnumber; 	
			}			
}; 
int main()
{
part a1, a2;
a1.setpart("ahmed",23300,1021323.56);
a2.setpart("mohamed",3323,301335.25);
a1.showpart();
cout<<endl;
a2.showpart();
cout<<endl;
system ("pause");
return 0;	
}
