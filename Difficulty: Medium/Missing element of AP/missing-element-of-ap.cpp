//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int high=0;
        int highcount=0;
        int n=arr.size();
       for(int i=0;i<n-1;i++)
       {
           if((arr[i+1]-arr[i])>high)
           {
               high=arr[i+1]-arr[i];
           }
       }
       int ans=0;
       for(int i=0;i<n-1;i++)
       {
           if((arr[i+1]-arr[i])==high)
           {
               highcount++;
               ans=arr[i];
               
           }
       }
       if(highcount==1)
       {
           if(arr[1]-arr[0]!=high)
           ans+=(arr[1]-arr[0]);
           else
           ans+=(arr[n-1]-arr[n-2]);
       }
       else
       ans=arr[n-1]+(arr[1]-arr[0]);
       return ans;
       
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.findMissing(arr) << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends