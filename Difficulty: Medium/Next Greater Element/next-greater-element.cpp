class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int>st;
        vector<int>res(arr.size());
        for(int i=arr.size()-1;i>=0;i--)
        {
            while(!st.empty()&&st.top()<=arr[i])
            st.pop();
            res[i]=st.empty()?-1:st.top();
            st.push(arr[i]);
        }
        return res;
    }
};