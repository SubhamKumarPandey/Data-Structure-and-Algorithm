#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         long n;
         cin>>n;
         long arr[n];
         for(long i=0;i<n;i++){
             cin>>arr[i];
         }
        
        for(long i=n-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }
     return 0;
	
}
