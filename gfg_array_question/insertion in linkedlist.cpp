#include<iostream>
using namespace std;
int main()
{
	
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head, *temp, *newnode;
	head=0;
	int count=0;
	int choice=1;
	while(choice){
		newnode=new node;
		cout<<"enter data";
		cin>>newnode->data;
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
			
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		cout<<"do u want to continue(0 ,1)?";
		cin>>choice;
	}
	temp=head;
	while(temp!=0)
	{
		cout<<temp->data;
		temp=temp->next;
		void insert();
	/*	{
		
newnode=new node;
	cout<<"enter data inserted at begning";
	cin>>newnode->data;
	newnode->next=head;
	head=newnode;
	cout<<endl<<count;
	
	
}*/
		
		count++;
	}
	cout<<endl<<count;
/*void insert()
{
newnode=new node;
	cout<<"enter data inserted at begning";
	cin>>newnode->data;
	newnode->next=head;
	head=newnode;
	cout<<endl<<count;
	
	
}*/
	
}
