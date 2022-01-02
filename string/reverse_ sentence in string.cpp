class Solution {
public:
    string reverseWords(string s) {
        int a=0;
        int e=s.length()-1;
        while(a<=e){
            swap(s[a],s[e]);
            a++;
            e--;
        }
        e=s.length()-1;
        string temp="";
        string res="";
        for(int i=0;i<s.length();i++){
            if(s[0]==' '||s[e]==' '){
                continue;
            }
            if(s[i]!=' '){
                temp.push_back(s[i]);
            }
                else{
                
                    reverse(temp.begin(),temp.end());
                    for(int j=0;j<temp.length();j++){
                        res.push_back(temp[j]);
                    }
                    res.push_back(' ');
                temp="";
            }
        }
        reverse(temp.begin(),temp.end());
                    for(int j=0;j<temp.length();j++){
                        res.push_back(temp[j]);
                    }
        return res;
        
    }
};