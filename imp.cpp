#include<iostream>
using namespace std;
int main()
{

struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *newnode;
struct node *temp;
int count=0;
int choice=1;
while(choice){
	//newnode=(struct node *)malloc(sizeof(struct node));
	newnode=new node;
	cout<<"enter data";
	cin>>newnode->data;
	//scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	head=temp=newnode;
	else{
		temp->next=newnode;
		temp=newnode;}
		cout<<"do u want to continue(0,1)?";
		cin>>choice;
	}
	temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
		count++;
		
	}
	cout<<endl<<count;
	//printf("%d", count);

	
	
	
	
	
	
	
	
	
}
