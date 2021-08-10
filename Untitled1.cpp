#include<iostream>
using namespace std;
int choice;
struct node{
	int data;
	struct node *next;
}*temp,*head=0;
void create_node(){
	head=0;
	struct node *newnode;
	cout<<"Enter the number of node you want to insert : ";
	cin>>choice;
	while(choice){
		choice--;
		newnode= new node;
		cout<<"Enter the data you want to insert : ";
		cin>>newnode->data;
		newnode->next=0;
		if(head==0){
			temp=newnode;
			head=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		
	}
}
void deleteAlternate(){
	  struct node *temp,*update=head;
    temp=update->next;
 
    while(update!=NULL && temp!=NULL)
    {
        update->next=temp->next;
        delete(temp);
        update=update->next;
       
            temp=update->next;
    }

	

	
}
void display(){
	temp=head;
	cout<<"\nYour data is: \n";
	while(temp!=0){
		cout<<temp->data<<"\n";
		temp=temp->next;
	}
	
}
int main(){
	create_node();
	display();
	deleteAlternate();
	display();
}
