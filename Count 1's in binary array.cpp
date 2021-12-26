#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int countOnes(int arr[], int N)
    {
        
        // Your code here
        sort(arr,arr+N);
         int low = 0, high=N-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(arr[mid]==0) low=mid+1;
            else{
            
            if(arr[mid]==0||arr[mid-1]==0 ) return (N-mid);
            else high = mid-1;
            }
        }
       
       return -0;
    }
};
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
            
        Solution ob;
        cout <<ob.countOnes(arr, n)<<endl;
    }
    return 0;
}
