string reverseWords(string s) {
        int a=0;
        int e=s.length()-1;
        while(a<=e){
            swap(s[a],s[e]);
            a++;
            e--;
        }
        string temp="";
        string res="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                res.push_back(s[i]);
            }
                else{
                res.push_back(' ');
                temp=' ';
            }
        }
        return res;
        
    }