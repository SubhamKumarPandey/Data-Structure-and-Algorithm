#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string modify (string s)
    {
        int e=s.length();
        int a=0;
        int i=0;
        while(i<e){
            if(s[i]!=' '){
                s[a++]=s[i];
               
            }
             i++;
        }
        return s.substr (0,a);
    }
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}