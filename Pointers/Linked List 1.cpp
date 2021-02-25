#include<iostream>
using namespace std;
struct link               //one element of the linked list 
{
	int data;             // Data of the link 
	link* next;          //pointer to element from link type and this point to next element of the list  
}; 
class linklist
{
	private:
		link* first;              //the pointer of the first link 
	public:
	    linklist()
		{
		    first=NULL;	
		}
		void additem(int a);     //add item of the link 
		void display();         //display of the link item
		void deleteitem(int a);
		void additemend (int x);
		void additembetween(int b,int c);
};
void linklist::additem(int a)
{                                     /*in this function we will be the pointer of the newlink point to null and the first pointer point to new link */
	link* newlink=new link ;
	newlink->data=a;                 // any link added that add in destination of first pointer 
	newlink->next=first;
	newlink=first;
}
void linklist::display()
{
	link* current=first;           //this pointer point to the first link
	if(current==NULL)
	cout<<"the linked list is empty"<<endl; 
	while(current!=NULL)
	{
		cout<<current->data;        //display the pointer the link 
		current=current->next;      //move the pointer to the next link 
	}
}
void linklist::additemend(int x)    // when we need to add item to the end of the link list 
{
	link* put =new link;
	link* end =new link;
	end=first;
	put->data=x;
	if(end==NULL)
	{
		put->next=NULL;
		first=put;
		return;
	}
	while (end->next!=NULL)
	{
		end=end->next;
	}
	put->next=NULL;
	end->next=put;
}
/*void linklist::additembetween(int z)
{
	link* put1=new link;
	link* end1=new link;
	end1=first;
	put1->data=z;
	if(end1==NULL || end1==first)
	{
		put1->next=NULL;
		first=put1;
		return;
	}
	while(end1==NULL && end1==first)
	{
		end1=end1->next;
	}
	put1->next=end1->next;
	end1->next=put1;
}*/
void linklist::additembetween(int b, int c)
{
	link* want= new link;
	want=first;
	while(want!=NULL)
	{
		if(want->data==b)
		{
		link* newlink=new link;
		newlink->data=c;
		newlink->next=want->next;
		want->next=newlink;
		break;
		}
	}
	want=want->next;
	if(want==NULL)
	{
		cout<<"the link not have the dataitem="<<c<<endl;
	}
}
void linklist::deleteitem(int a)
{
	link* one ;
	one =first;
	if(one==NULL)
	{
		cout<<"the linked list is empty.";
		return;
	}
	if(one->data==a)
	{
	first=one->next;
	return;
    }
    if(one->next==NULL)
    {
    	cout<<"not deleted.";
    	return;
	}
	while(one->next!=NULL)
	{
		if(one->next->data==a)
		{
			one->next=one->next->next;
			return;
		}
		one=one->next;
	}
	cout<<"not deleted because not found ";
}
int main()
{
	linklist a;                //defined object from link list type 
	a.additem(50);
	a.additem(54);
	a.additem(70);
	a.additemend(80);
	a.additembetween(54,90);
	a.deleteitem(50);
	a.deleteitem(54);
	a.deleteitem(80);
	a.deleteitem(70);
	a.deleteitem(90);
	a.display();
	system("pause");
	return 0;
}
