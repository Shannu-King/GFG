/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
  void dfs(Node *root,vector<int>&res)
  
  {
      if(root==nullptr)
      return;
     
      dfs(root->left,res);
      //cout<<root->data<<" ";
      res.push_back(root->data);
      dfs(root->right,res);
  }
    bool isSymmetric(Node* root) {
        // Code here
        vector<int>res;
        dfs(root,res);
        int n=res.size();
        // for(int i=0;i<res.size()/2;i++)
        // {
            
        //     //cout<<res[i]<<" "<<res[n-1-i]<<endl;
        // }
        for(int i=0;i<res.size()/2;i++)
        {
            if(res[i]!=res[n-1-i])
            return false;
            //cout<<res[i]<<" "<<res[n-1-i]<<endl;
        }
        return true;
    }
};