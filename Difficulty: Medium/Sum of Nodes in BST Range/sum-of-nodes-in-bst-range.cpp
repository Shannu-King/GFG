/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  int dfs(Node *root,int l,int r,int sum)
  {
      if(root==nullptr)
      return sum;
      sum=dfs(root->left,l,r,sum);
      if(root->data>=l&&root->data<=r)
      sum+=root->data;
      sum=dfs(root->right,l,r,sum);
      return sum;
  }
    int nodeSum(Node* root, int l, int r) {
        // code here
        int sum=dfs(root,l,r,0);
        return sum;
    }
};
