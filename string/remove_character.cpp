#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        string result;
     int i,j,l1,l2;
   
     l1=string1.length();
     l2=string2.length();
   
     int hash[257];
     for(i=0;i<257;i++)
         hash[i]=0;
   
     for(i=0;i<l2;i++)
         hash[string2[i]]++;
       
     for(i=0;i<l1;i++)
     {
         if(hash[string1[i]]==0)
         result=result+string1[i]; 
     }
   
     return result;
    }
   
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}