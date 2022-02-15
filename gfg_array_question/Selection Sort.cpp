#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


 // } Driver Code Ends
class Solution
{
    public:
    int select(int arr[], int i)
    {
        int max=arr[0]; int ind=0;
        int min;
        for(int j=1;j<=i;j++){
            if(arr[j]>max){
                ind=j;
                max=arr[j];
            }
        }
        return ind;
    }
     
    void selectionSort(int arr[], int n)
    {
        for(int i=n-1;i>=0;i--){
           int index= select(arr,i);
           swap(arr[i],arr[index]);
        }
    }
};

// { Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
