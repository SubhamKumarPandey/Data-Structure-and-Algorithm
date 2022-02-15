#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
  long long int bs(long long int x){
      long long int s=0;
      long long int e=x;
      long long int mid=s+(e-s)/2;
      long long int ans=-1;
      while(s<=e){
          long long int sq=mid*mid;
          if(sq==x){
              return mid;
          }
          if(sq<x){
              ans=mid;
              s=mid+1;
          }
          else{
              e=mid-1;
          }
          mid=s+(e-s)/2;
      }
      return ans;
  }
    long long int floorSqrt(long long int x) 
    {
        return bs(x); 
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
