class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
           map<int,int>mp;
           int c=0;
        int maxx=0;
        int start=0;
        for(int end=0;end<arr.size();end++)
        {
            mp[arr[end]]++;
            while(mp.size()>k)
            {
                mp[arr[start]]--;
                if(mp[arr[start]]==0)
                mp.erase(arr[start]);
                start++;
            }
            c+=(end-start+1);
        }
        return c;
    }
};