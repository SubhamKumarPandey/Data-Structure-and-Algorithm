#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool solve(int arr[],int n,int mid,int k){
        int sum=0;
        int stu=1;
        for(int i=0;i<n;i++){
            if(arr[i]>mid) return false;
            if(arr[i]+sum>mid){
                stu++;
                sum=arr[i];
                if(stu>k) return false;
            }
            else{
                sum += arr[i];
            }
        }
        return true;
    }
    int findPages(int arr[], int n, int m) 
    {
        //code here
        int lb=0; int mid,ub,ans=0,sum=0;
        for(int i=0;i<n;i++) sum+=arr[i];
        ub=sum;
        while(lb<=ub){
            mid=(lb+ub)/2;
            if(solve(arr,n,mid,m)){
                ans=mid;
                ub=mid-1;
            }
            else {
                lb=mid+1;
            }
        }
        return ans;
    }
};

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
