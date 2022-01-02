class Solution {
public:
    bool isvalid(char c)
{
    if( (48<=c && c<=57) || (65<=c && c<=90) || (97<=c && c<=122))
        return true;
    return false;
}

char lowerCase(char c)
{
    if(65<=c && c<=90)
        return c+32;
    else
        return c;
}
    bool check(string a){
        int s=0;
        int e=a.length()-1;
        while(s<=e){
            if(a[s]!=a[e]){
                return 0;
            }
            else{
                s++;
                e--;
            }
        }
        return 1;
    }

    bool isPalindrome(string s) {
        string temp= "";
        for(int j=0;j<s.length();j++){
            if(isvalid(s[j])){
                temp.push_back(s[j]);
            }
        }
         for(int i=0;i<temp.length();i++){
             temp[i]=lowerCase(temp[i]);
         }
        return check(temp);


    }
};