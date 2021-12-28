#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string sum(int *a,int n,int *b,int m){
    int carry=0;int s=0;
    int i=n-1,j=m-1;
    int k=n-1;
    int sum[n+1];
    while(j>=0){
        s=a[i]+b[j]+carry;
        sum[k]=s%10;
        carry=s/10;
        i--;j--;k--;
    }
    while(i>=0){
        s=carry+a[i];
        sum[k]=s%10;
        carry=s/10;
        k--;
        i--;
    }
    string ans = "";
    
    if(carry){    
        ans += "1";
    }
    for(int i=0;i<n;i++){
        if(ans.size() == 0 and sum[i] == 0)
            continue;
        ans += to_string(sum[i]);
    }
    
    return ans;
    }
    
    string calc_Sum(int *a,int n,int *b,int m){
        if(m>n) return sum(b,m,a,n);
        else return sum(a,n,b,m);
    }
};


// { Driver Code Starts.
int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int m;
	    cin>>m;
	    int b[m];
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    Solution ob;
	    cout << ob.calc_Sum(a,n,b,m) << endl;
	}
	return 0;
} 
