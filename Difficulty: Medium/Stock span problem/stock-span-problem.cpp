//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // write code here
        int st[arr.size()];
        int k=-1;
        vector<int>res;
        vector<int>ans=arr;
        sort(ans.begin(),ans.end());
        if(ans==arr)
       {
           for(int i=0;i<arr.size();i++)
           {
              res.push_back(i+1);
           }
           return res;
       }
        for(int i=0;i<arr.size();i++)
        {
            st[++k]=arr[i];
            int l=k;
            int c=0;
            while(arr[i]>=st[l]&&l>=0)
            {
                c++;
                l--;
            }
            res.push_back(c);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.calculateSpan(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends