#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int mid=start+(end-start)/2;
	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
}
int main(){
	int n=5;
	int arr[n]={1,2,3,4,5};
	int key=4;
	int res=binarysearch(arr,n,key);
	cout<<res;
}
