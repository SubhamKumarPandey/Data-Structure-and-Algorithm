class Solution {
public:
void leafnode(Node* root,vector<int> v){
    if(isLeaf(root)){
        v.push_back(root->data);
    }
    if(root->left){
        leafnode(root->left,v);
    }
    if(root->right){
        leafnode
    }
    
}
void leftnode(Node* root,vector<int> v){
    Node* curr=root->left;
    while(curr){
        if(!isLeaf(curr)){
            v.push_back(curr->data);
        }
        if(curr->left){
            curr=curr->left;
        }
        else{
            curr=curr->right;
        }
    }
}
void rightnode(Node* root,vector<int> v){
    Node* curr=root->right;
    vector<int> temp;
    while(curr){
        if(!isLeaf(curr)){
            temp.push_back(curr->data);
        }
        if(curr->right){
            curr=curr->right;
        }
        else{
            curr=curr->left
        }
    }
    for(int i=temp.size()-1;i>=0;i--){
        v.push_back(temp[i])
    }
    
}
    vector <int> boundary(Node *root)
    {
        vector<int> v;
        if(root==NULL){
            return v;
        }
        if(isLeaf(root)){
            v.push_back(root->data);
        }
        leftnode(root,v);
        leafnode(root,v);
        rightnode(root,v);
        return v;
    }
};
