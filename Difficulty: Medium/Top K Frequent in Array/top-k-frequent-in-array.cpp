class Solution {
  public:
  static bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    // First, compare based on the first element
    if (a.first != b.first)
        return a.first > b.first;  // Ascending order for the first element
    
    // If first elements are equal, compare based on the second element in descending order
    return a.second > b.second;  // Descending order for the second element
}
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        vector<pair<int,int>>p;
        for(const auto&it:mp)
        {
            p.push_back({it.second,it.first});
        }
        sort(p.begin(),p.end(),compare);
        int i=1-1;
        vector<int>res;
        while(k--)
        {
            res.push_back(p[i].second);
            i++;
        }
      
        return res;
        
    }
};
