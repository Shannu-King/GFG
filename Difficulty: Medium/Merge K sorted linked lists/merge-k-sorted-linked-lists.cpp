/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        vector<int>ans;
        for(int i=0;i<arr.size();i++)
        {
            Node * curr=arr[i];
            while(curr)
            {
                ans.push_back(curr->data);
                curr=curr->next;
            }
        }
        sort(ans.begin(),ans.end());
        Node * temp=new Node(ans[0]);
        Node * temp1=temp;
        for(int i=1;i<ans.size();i++)
        {
            Node * newnode=new Node(ans[i]);
            temp1->next=newnode;
            temp1=newnode;
        }
        return temp;
    }
};

