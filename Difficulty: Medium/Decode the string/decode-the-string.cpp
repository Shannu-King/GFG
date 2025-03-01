//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
        // code here
      
    stack<int> numStack;      // Stack to store numbers
    stack<string> strStack;   // Stack to store substrings
    string currString = "";   // Current working string
    int num = 0;

    for (char c : s) {
        if (isdigit(c)) {  // Extract full number
            num = num * 10 + (c - '0');
        } else if (c == '[') {  // Push number and current string to stack
            numStack.push(num);
            strStack.push(currString);
            currString = "";
            num = 0;  // Reset number
        } else if (c == ']') {  // Decode the last stored segment
            string temp = currString;
            currString = strStack.top(); 
            strStack.pop();
            int repeatTimes = numStack.top();
            numStack.pop();
            while (repeatTimes--) {
                currString += temp;
            }
        } else {  // Append characters
            currString += c;
        }
    }

    return currString;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends