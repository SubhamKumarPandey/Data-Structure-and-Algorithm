#include <iostream>
#include <climits>
using namespace std;

void maximumAdjacent(int, int[]);


 // } Driver Code Ends
//User function Template for C++

// Function to find maximum for every adjacent pairs in the array.
void maximumAdjacent(int sizeOfArray, int arr[]){
    int v[sizeOfArray];
    for(int i=0;i<sizeOfArray-1;i++){
        if(arr[i]>=arr[i+1]){
            v[i]=arr[i];
        }
        else{
            v[i]=arr[i+1];
        }
    }
    for(int i=0;i<sizeOfArray-1;i++){
        cout<<v[i]<<" ";
    }

}

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

	    maximumAdjacent(sizeOfArray, arr);
	    cout << endl;
	}

	return 0;
}