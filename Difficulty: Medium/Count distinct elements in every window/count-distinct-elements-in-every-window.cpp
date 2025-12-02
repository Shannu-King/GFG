class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<k;i++)
        {
            mp[arr[i]]++;
        }
        res.push_back(mp.size());
        for(int i=k;i<arr.size();i++)
        {
            mp[arr[i-k]]--;
            if(mp[arr[i-k]]==0)
            mp.erase(arr[i-k]);
            mp[arr[i]]++;
            res.push_back(mp.size());
        }
        return res;
    }
};