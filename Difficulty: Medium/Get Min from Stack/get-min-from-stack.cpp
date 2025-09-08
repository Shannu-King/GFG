class Solution {
  public:
  stack<pair<int,int>>st;
  int minn=INT_MAX;
    Solution() {
        // code here
        
    }

    // Add an element to the top of Stack
    void push(int x) {
        
        // code here
          if (st.empty()) {
            st.push({x, x});
        } else {
            
            int currentMin = std::min(x, st.top().second);  
            st.push({x, currentMin});
        }
    }

    // Remove the top element from the Stack
        
    void pop() {
        // code here
        if(!st.empty())
        st.pop();
    }

        
    // Returns top element of the Stack
    int peek() {
        // code here
        if(!st.empty())
        return st.top().first;
        return -1;
    }
        

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if(!st.empty())
        return st.top().second;
        return -1;
    }
};