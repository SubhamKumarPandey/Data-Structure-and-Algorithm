#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
   int i=0,j=0;
        int flag=0;
        vector<int> ans;
        while(i<n || j<n)
        {
            if(flag==0)
            {
                while(i<n && a[i]<0)
                    i++;
                if(i<n)
                {
                   ans.push_back(a[i]);
                   i++;
                }
                flag=1;
            }
            else if(flag==1)
            {
               while(j<n && a[j]>=0)
                    j++;
               if(j<n)
               {
                   ans.push_back(a[j]);
                   j++;
               }
                flag=0;
            }
        }
        return ans;
    
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}