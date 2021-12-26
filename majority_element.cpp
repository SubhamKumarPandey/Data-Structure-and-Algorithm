#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int majorityElement(int a[], int size)
    {
       if(size==1)
    return(a[0]);
        int n=size;

        
    int count =1;
    int res=0;
    
    if(n==1){
        return a[0];
    }
    for(int i=1; i<n; i++){
        if(a[i]==a[res]){
            ++count;
        }
        else{
            --count;
        }
        if(count ==0){
            count=1;
            res=i;
        }
    }
    
    count=0;
    
    for(int i=0; i<n; i++){
        if(a[i]==a[res]){
            count++;
        }
    }
    if(count<= n/2){
        return -1;
    }
    return a[res];
        

        
    }
};
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
