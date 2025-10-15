/*Complete the function below

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
void levelorder(Node *root,vector<int>&ans)
{
    if(root==NULL)
    return;
    levelorder(root->left,ans);
    ans.push_back(root->data);
    levelorder(root->right,ans);
}
class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int kthSmallest(Node *root, int K) {
        // add code here.
        if(root==NULL)
        return -1;
        vector<int>a;
        levelorder(root,a);
        for(int i=0;i<a.size();i++)
        {
            if(i+1==K)
        return a[K-1];
        }
        return -1;
    }
};
