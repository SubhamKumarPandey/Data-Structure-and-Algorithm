#include<iostream>
using namespace std;
main()
{
	int a[50];
	int size,pos,num,i;
	cout<<"enter size of array";
	cin>>size;
	cout<<"enter array element";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"enter data you want to short";
	cin>>num;
	cout<<"enter position at which element is inserted ";
	cin>>pos;
	for(i=size-1;i>pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=num;
	size++;
	for(i=0;i<size;i++)
	{
		cout<<a[i];
	}
}
