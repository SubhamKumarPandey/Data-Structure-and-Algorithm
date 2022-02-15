#include<stdio.h>

struct node{
	int data;
	struct node *link;
};

struct node *start=NULL;
struct node *creatnode()
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	return(newnode);
}
void insertnode()
{
	struct node *temp,  *t;
	temp=creatnode();
	printf("enter data to be inserted");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(start==NULL)
	start=temp;
	else{
		t=start;
		while(t->link!=NULL)
		t=t->link;
		t->link=temp;
	}
}

