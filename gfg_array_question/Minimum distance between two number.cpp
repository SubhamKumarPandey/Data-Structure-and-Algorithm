#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
         int s = n, e = n, m = n;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == x)
            {
                s = i;
                m = min(m,abs(s-e));
            }
            else if(a[i] == y)
            {
                e = i;
                m = min(m,abs(s-e));
            }
            
        }
        
        if(s == n || e == n)return -1;
        return m;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}