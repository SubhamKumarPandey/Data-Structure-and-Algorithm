/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> ans;
    vector<int> preorder(Node* root) {
        if(root==NULL){
            return ans;
        }
        pre(root,ans);
        return ans;
    }
    void pre(Node* root, vector<int> &trav){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        for(Node* curr: root->children){
            pre(curr,trav);
        }
    }
};
