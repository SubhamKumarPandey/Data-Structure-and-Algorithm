#include<bits/stdc++.h>
using namespace std;

int peak(int arr[],int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]<arr[mid+1]){
			s=mid+1;
		}
		else{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return s;
}
int main(){
	int n=10;
	int arr[n]={1,2,3,4,7,8,5,3,1};
	int res=peak(arr,n);
	cout<<"Index of peak element of mountain"<<res;
	
}
