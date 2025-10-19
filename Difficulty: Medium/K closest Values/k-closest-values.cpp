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
  void inorder(Node* root, int target,  vector<pair<int,int>>&pq)
  {
      if(root==nullptr)
      return;
      inorder(root->left,target,pq);
      pq.push_back({abs(target-root->data),root->data});
       inorder(root->right,target,pq);
      
  }
    vector<int> getKClosest(Node* root, int target, int k) {
        // code here
       vector<pair<int,int>>pq;
        inorder(root,target,pq);
        vector<int>res;
        sort(pq.begin(),pq.end());
       for(int i=0;i<k;i++){
            res.push_back(pq[i].second);
          
        }
        return res;

    }
};