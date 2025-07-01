/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  void travel(Node *node,int *a)
  {
      if(node->left==nullptr&&node->right==nullptr)
      return;
      travel(node->left,a+1);
      travel(node->right,a+1);
  }
    int height(Node* node) {
        // code here
        if(node==nullptr)
        return -1;
        int a=0;
       int l=height(node->left);
       int r=height(node->right);
        return 1+max(l,r);
    }
};