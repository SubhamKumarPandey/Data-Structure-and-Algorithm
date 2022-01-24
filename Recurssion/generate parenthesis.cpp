  /**
   Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]
 

Constraints:

1 <= n <= 8
   */
  vector<string> ans;
    void check(string curr,int score,int len){
        if(score<0){
            return;
        }
        if((int)curr.size()>(2*len)){
            return;
        }
        if((int)curr.size()==(2*len)&&score==0){
            ans.push_back(curr);
        }
        check(curr+"(",score+1,len);
        check(curr+")",score-1,len);
        return;
        
    }
    vector<string> generateParenthesis(int n) {
        string curr="";
        check(curr,0,n);
        return ans;
        
    }