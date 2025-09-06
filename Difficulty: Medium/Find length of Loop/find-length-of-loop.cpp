/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        unordered_map<Node*,int>mp;
        Node *ans=nullptr;
        Node *temp=head;
        int c=0;
        while(temp)
        {
           if(mp[temp])
           {
               ans=temp;
               break;
           }
           mp[temp]++;
           temp=temp->next;
           
        }
        if(ans==nullptr)
        return c;
        temp = ans;
do {
    temp = temp->next;
    c++;
} while (temp != ans);
        return c;
    }
};