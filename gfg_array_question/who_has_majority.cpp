#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        // code here
        int count=0,count1=0,X=x,Y=y;
        for(int i=0;i<n;i++){
                if(arr[i]==x){
                    X=arr[i];
                    count++;
                }
                else if(arr[i]==y){
                    Y=arr[i];
                    count1++;
                }

        }
        if(count>count1){
            return X;
        }
        else if(count<count1){
            return Y;
        }
        else{
            if(X>Y){
                return Y;
            }
            else{
                return X;
            }
        }

    }
};

// { Driver Code Starts.
int main() {

    int t; // Testcases
    cin >> t; // Input the testcases
    while (t--) // Until all testcases are exhausted
    {
        int n; // Size of array
        cin >> n; // Input the size
        int arr[n]; // Declaring array of size n
        for (int i = 0; i < n;
             i++) // Running a loop to input all elements of arr
            cin >> arr[i];

        int x, y; // declare x and y
        cin >> x >> y; // input x and y
        Solution obj;
        cout << obj.majorityWins(arr, n, x, y)
             << endl; // calling the function that you complete
    }

    return 0;
}