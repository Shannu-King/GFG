class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        int n=q.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            int a=q.front();
           st.push(a);
           q.pop();
        }
        while(!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
    }
};