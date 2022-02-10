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
	stack<Node*> st;
	Node *test=root;
	while(true){
		if(test!=NULL){
			st.push(test);
			test=test->left;
		}
		else{
			if(st.empty()==true){
				break;
			}
			test=st.top();
			st.pop();
			ans.push_back(test->key);
			test=test->right;
			
		}
	}
   return ans;
} 
