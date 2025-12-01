class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        // code
        int maxx=0;
        int c=0;
        int l=0;
        map<char,int>mp;
        for(int r=0;r<s.size();r++)
        {
            c++;
           mp[s[r]]++;
            while(mp[s[r]]>1)
            {
                mp[s[l]]--;
                if(mp[s[l]]==0)
                mp.erase(mp[s[l]]);
                l++;
             
            }
            // mp[s[r]]++;
            maxx=max(maxx,r-l+1);
        }
        return maxx;
    }
};