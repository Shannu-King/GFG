//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int fun(int a,int b,string c)
  {
      if(c=="+")
      return a+b;
      else if(c=="-")
      return a-b;
      else if(c=="*")
      return a*b;
      else
      return a/b;
  }
    int evaluate(vector<string>& arr) {
        // code here
        stack<string>st;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!="+"&&arr[i]!="-"&&arr[i]!="*"&&arr[i]!="/")
            st.push(arr[i]);
            else
            {
                int a=stoi(st.top());
                st.pop();
                int b=stoi(st.top());
                st.pop();
                int ans=fun(b,a,arr[i]);
                st.push(to_string(ans));
            }
        }
        return stoi(st.top());
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends