#include<stdio.h>

struct node{
	int data;
	struct node *next;

	struct node *link;
};
int main()
{

struct node *start=0;
struct node *newnode;
struct node *temp;
//struct node *next;
int count=0;
int choice=1;
 while(choice){
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(start==0)
	start=temp=newnode;
	else{
		temp->next=newnode;
		temp=newnode;
		printf("do u want to continue(0,1)?");
		scanf("%d",&choice);
	}
	temp=start;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
		count++;
		
	}
	printf("%d", count);

   }
}
	
	
	
	
	
	
	
	
	
	
