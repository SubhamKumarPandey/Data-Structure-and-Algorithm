#include<iostream>
using namespace std;

struct node{
	int data;
	node *link;
};
node *head=NULL; //global
int main()
{
	node *ptr=new node();
	ptr->data=2;
	ptr->link=NULL;
	head=ptr;
	return 0;
}
