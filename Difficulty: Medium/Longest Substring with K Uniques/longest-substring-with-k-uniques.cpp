class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int l=0;
        map<char,int>mp;
        int maxx=0;
        for(int r=0;r<s.size();r++)
        {
            mp[s[r]]++;
            while(mp.size()>k)
            {
                mp[s[l]]--;
                if(mp[s[l]]==0)
                mp.erase(s[l]);
                l++;
            }
            if(mp.size()==k)
            maxx=max(maxx,r-l+1);
        }
        return maxx!=0?maxx:-1;
    }
};