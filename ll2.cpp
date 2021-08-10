#include<iostream>
using namespace std;
int main()
{
  struct node{
		int data;
		struct node *next;
	};
		struct node *temp,*head,*newnode;
	int choice=1;
	while(choice){
	newnode=new node;
	cout<<"Enter data";
	cin>>newnode->data;
	newnode->next=0;
	if(head==0){
		head=newnode;
		temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;}
		cout<<"do you want to continue ?0/1";
		cin>>choice;
}
	temp=head;
	while(temp!=0){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
cout<<"enter data to be inserted";
cin>>newnode->data;
newnode->next=head;
head=newnode;
}
