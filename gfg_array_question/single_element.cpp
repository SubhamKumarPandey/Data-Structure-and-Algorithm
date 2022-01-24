/**
 * Sample Input 0

7
3 3 7 7 10 11 11

Sample Output 0
 */
#include <iostream>
using namespace std;
int search(int arr[],int n){
	int l=0;int h=n-1;
	int mid=l+(h-l)/2;
	while(l<=h){
		if(mid==0){
			if(arr[mid]!=arr[mid+1]){
				return arr[mid];
			}
			else{
				l=mid+1;
			}
		}
		else if(mid==n-1){
			if(arr[mid]!=arr[mid-1]){
				return arr[mid];
			}
			else{
				h=mid-1;
			}
		}
		else if(arr[mid]!=arr[mid+1]&&arr[mid]!=arr[mid-1]){
			return arr[mid];
		}
		else{
			int f=0;int s=0;
			if(arr[mid]==arr[mid+1]){
				f=mid;s=mid+1;
			}
			else{
				f=mid-1;s=mid;
			}
			if(f%2==0){
				l=mid+1;
			}
			else{
				h=mid-1;
			}
		}
		mid=l+(h-l)/2;
	}
	return -1;
}
int main() {
    int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<search(arr,n);
    return 0;
}