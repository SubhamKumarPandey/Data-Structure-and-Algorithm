#include<iostream.h>
using namespace std;
 
vector<vector<int>> zigzag<TreeNode* root>{
	vector<vector<int>> res;
if(root==NULL){
	return res;
}
queue<TreeNode*> q;
q.push(root);
bool falg=true;
while(!q.empty()){
	int size=q.size();
	vector<int> level;
	for(int i=0;i<size;i++){
		TreeNode* node=q.front();
		q.pop();
		int index=(flag)?i:size-1-i;
		level[index].push_back(node->val);
		if(node->left!=NULL){
			q.push(node->left);
		}
			if(node->right!=NULL){
			q.push(node->right);
		}
	}
	flag=!flag;
	res.push_back(level);
}
return res;

}
