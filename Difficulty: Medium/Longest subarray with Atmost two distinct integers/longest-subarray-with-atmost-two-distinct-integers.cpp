class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        map<int,int>mp;
        int maxx=0;
        int start=0;
        for(int end=0;end<arr.size();end++)
        {
            mp[arr[end]]++;
            while(mp.size()>2)
            {
                mp[arr[start]]--;
                if(mp[arr[start]]==0)
                mp.erase(arr[start]);
                start++;
            }
            maxx=max(maxx,end-start+1);
        }
        return maxx;
    }
};