class Solution {
  public:
  static bool lexicographicalSort(const std::string &a, const std::string &b) {
 return a + b <= b + a;
}
    string findLargest(vector<int> &arr) {
        // code here
        vector<string>res;
        for(int i=0;i<arr.size();i++)
        {
            res.push_back(to_string(arr[i]));
            
        }
       std::sort(res.begin(), res.end(), lexicographicalSort);

        string ans="";
        if(res[res.size()-1]=="0")
        return "0";
        
        for(int i=res.size()-1;i>=0;i--)
        {
            ans+=res[i];
        }
        return ans;
    }
};