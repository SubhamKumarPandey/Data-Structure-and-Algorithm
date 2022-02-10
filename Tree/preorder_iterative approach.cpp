#include <bits/stdc++.h>
using namespace std;
//iterative preorder
struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

vector<int> Preorder(Node *root){
	vector<int> ans;
   if(root==NULL){
   	return ans;
   }
   stack<Node*> st;
   st.push(root);
   while(!st.empty()){
   	root=st.front();
   	st.pop();
   	ans.push_back(root->data);
   	if(root->right!=NULL){
   		st.push(root->right);
	   
	   }
	   if(root->left!=NULL){
	   	st.push(root->left);
	   }
	   
   }
   return ans;
}  

