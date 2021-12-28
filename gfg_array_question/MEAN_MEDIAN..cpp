#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int median(int A[],int N)
    {
        
        sort(A,A+N);
      int median=0;
        //If number of elements is even then the median is average of two middle terms.
        if(N%2 == 0) 
            median = ( A[N/2] + A[(N/2)-1])/2;
        //If number of elements are odd then the middle term is the median.
        else
            median = A[(N-1)/2];
            
        //returning the median.
        return median;

    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
        }
        return sum/N;
      
    }
};


// { Driver Code Starts.

int main()
{
    //testcase
    int T;
    cin>>T;
   
    //looping testcase
    while(T--)
    {
        //number of elements in array
        int N;
        cin>>N;
        int a[N];
        
        //inseting elements in the array
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        Solution ob;
        //calling mean() and median() functions
        cout<<ob.mean(a,N)<<" "<<ob.median(a,N)<<endl;
    }
    return 0;
}