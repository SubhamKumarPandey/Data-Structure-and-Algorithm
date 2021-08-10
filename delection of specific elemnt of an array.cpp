
#include<iostream>
using namespace std;
main()
{
	int a[50];
	int size,pos,del,i;
	cout<<"enter size of array";
	cin>>size;
	cout<<"enter array element";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	//cout<<"enter data you want to delete";
//	cin>>del;
	cout<<"enter position at which you want to delete data ";
	cin>>pos;
	for(i=pos-1;i<size-1;i++)
	{
		a[i]=a[i+1];
	}
	//a[pos-1]=num;
	size--;
	for(i=0;i<size;i++)
	{
		cout<<a[i];
	}
}
