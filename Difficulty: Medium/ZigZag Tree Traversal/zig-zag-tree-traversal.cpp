/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        queue<pair<Node*,int>>q;
        q.push({root,0});
        vector<pair<int,int>>p;
        while(!q.empty())
        {
            Node* node=q.front().first;
            int level=q.front().second;
            p.push_back({node->data,level});
            q.pop();
            if(node->left)
            q.push({node->left,level+1});
            if(node->right)
            q.push({node->right,level+1});
        }
        bool flag=false;
        vector<int>res;
        vector<int>temp;
       for(int i=0;i<p.size();i++)
       {
           if(i>0&&p[i].second!=p[i-1].second)
           {
              
             
            if(flag)
            
           {
               reverse(temp.begin(),temp.end());
           }
               res.insert(res.end(),temp.begin(),temp.end());
                temp={};
                 flag=!flag;
           }
       
             temp.push_back(p[i].first);
         
           
           
       }
       if(flag)
       {
            reverse(temp.begin(),temp.end());
       }
        res.insert(res.end(),temp.begin(),temp.end());
        return res;
    }
};