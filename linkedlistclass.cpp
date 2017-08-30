#include<iostream>
using namespace std;
struct node
{ int value;
	node *next;
};
class linklist
{ node *start;
	public:
	linklist()
	{start=NULL;}
	void insert(int x);
	void display();


};
void linklist::insert(int x)
{
	cout<<"1.insert at beggining\n2.insert at end";
	int ch;cin>>ch;
	switch(ch)
	{case 1:
	 node*temp=new node;
	temp->value=x;
	temp->next=start;
	start=temp;
	break;
	case 2:
	node *temp1=new node;
	temp1->next=start;
	while(temp1!= NULL)
	temp1=temp1->next;

	temp1->value=x;
	temp1->next=NULL;
	break;

} }
void linklist::display()
{ node *dptr=start;
	while(dptr!=0)
	{cout<<endl<<dptr->value;
	dptr=dptr->next;
}
}
int main()
{int ch;  
	linklist obj;
	
	
	while(1)
{	cout<<"1.insert \n2.traverse\n3.delete\n4.exit";
cout<<"enter you choice"<<endl; 
cin>>ch;
	 
	 switch(ch)
	{
	case 1:int y; 
	cout<<"enter an element to insert";
	cin>>y;
	obj.insert(y);
	break;

	case 2:obj.display();
	break;

    }
}
}

