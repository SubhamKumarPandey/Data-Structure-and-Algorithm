#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
      sort(arr,arr+sizeOfArray);
      vector<int> v;
      int x=-1;
      v.push_back(arr[sizeOfArray-1]);
      int i=sizeOfArray-1;
      for(;i>0;i--){
          if(arr[i-1]!=arr[i]){
          v.push_back(arr[i-1]);
              
          }
          else if(arr[i-1]==arr[i]){
              continue;
          }
          else{
              v.push_back(x);
          }
      }
      if(arr[i]==arr[i+1]){
          v.push_back(x);
      }
      return v;
       
         
    }
};

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}