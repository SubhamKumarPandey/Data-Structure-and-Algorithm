#include<bits/stdc++.h>
using namespace std;
int fi(int arr[],int n,int k){
	int s=0,e=n-1,ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(arr[mid]==k){
			ans=mid;
			e=mid-1;
		}
		else if(k>arr[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int si(int arr[],int n,int k){
	int s=0,e=n-1,ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(arr[mid]==k){
			ans=mid;
			s=mid+1;
		}
		else if(k>arr[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int main(){
			int n=5;
	int arr[n]={1,4,4,4,5};
	int key=4;
	int ans1=fi(arr,n,key);
	int ans2=si(arr,n,key);
	int res=ans2-ans1+1;
	cout<<res;
}
