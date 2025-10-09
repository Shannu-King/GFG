/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
   void call_of(Node* root,vector<int>&vec){
        if(root == NULL) return ;
        
        if(root->left) call_of(root->left,vec);
        if(root->right) call_of(root->right,vec);
        vec.push_back(root->data);
   }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int>res;
        call_of(root,res);
        return res;
    }
};