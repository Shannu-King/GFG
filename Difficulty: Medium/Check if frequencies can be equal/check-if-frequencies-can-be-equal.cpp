class Solution {
  public:
    bool sameFreq(string& s) {
        // code here
        int freq[26]={0};
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        int c=0;
        vector<int>res;
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            res.push_back(freq[i]);
            
        }
        sort(res.begin(),res.end());
        bool found=true;
        for(int i=1;i<res.size();i++)
        {
            if(res[i-1]!=res[i])
            {
                if(abs(res[i]-res[i-1])==1&&found)
                {
                    if(res[i-1]!=1)
                    res[i]--;
                   found=false;
                }
                else
                return false;
                
            }
            //cout<<res[i]<<" "<<res[i-1]<<endl;
        }
       // cout<<res.size();
        return true;
    }
};