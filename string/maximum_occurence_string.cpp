#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[26]={0};
        int number;
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            if(ch>='a'&&ch<='z'){
                number=ch-'a';
            }
            else{
                number=ch-'A';
            }
            arr[number]++;
        }
        int maxi=-1;int ans=0;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                ans=i;
                maxi=arr[i];
            }
        }
        char final=ans+'a';
        return final;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
} 