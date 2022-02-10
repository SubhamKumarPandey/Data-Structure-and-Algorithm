#include <bits/stdc++.h>
using namespace std;
//iterative posterorder
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

vector<int> Postorder(Node *root){
	vector<int> ans;
   if(root==NULL){
   	return ans;
   }
   stack<Node*> st1,st2;
   st1.push(root);
   while(!st1.empty()){
   	root=st1.front();
   	st1.pop();
   	st2.push(root);
   		   if(root->left!=NULL){
	   	st1.push(root->left);
	   }
   	if(root->right!=NULL){
   		st1.push(root->right);
	   
	   }
	   
   }
   while(!st2.empty()){
   	root=st2.top();
   	st2.pop();
   	ans.push(root->key);
   	
   }
   return ans;
} 
