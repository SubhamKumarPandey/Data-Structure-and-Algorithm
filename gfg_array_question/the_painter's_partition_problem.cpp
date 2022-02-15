#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
  bool ispossible(int arr[],int n,int k,long long mid){
      long long par=1;
      long long partion=0;
      for(int i=0;i<n;i++){
          if(arr[i]+partion<=mid){
              partion+=arr[i];
          }
          else{
              par++;
              if(arr[i]>mid||par>k){
                  return false;
              }
              partion=arr[i];
              
          }
      }
      return true;
  }
    long long minTime(int arr[], int n, int k)
    {
        long long s=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        long e=sum;
        long long mid=s+(e-s)/2;
        long long ans=0;
        while(s<=e){
            if(ispossible(arr,n,k,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
} 
