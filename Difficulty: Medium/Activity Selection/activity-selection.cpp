//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &end) {
        // code here
        vector<pair<int,int>>p;
        for(int i=0;i<start.size();i++)
        {
            p.push_back({end[i],start[i]});
        }
        sort(p.begin(),p.end());
        int depth=p[0].first;
        int c=1;
        for(int i=1;i<end.size();i++)
        {
            if(p[i].second>depth)
            {
                c++;
                depth=max(depth,p[i].first);
            }
        }
        return c;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> start;
        int num;
        while (ss >> num)
            start.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> finish;
        ss.str(input);
        while (ss >> num)
            finish.push_back(num);

        Solution obj;
        cout << obj.activitySelection(start, finish) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends