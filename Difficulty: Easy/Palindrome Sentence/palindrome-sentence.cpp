class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            s[i]=tolower(s[i]);
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
            ans+=s[i];
        }
        int n=ans.size();
        for(int i=0;i<ans.size()/2;i++)
        {
            if(ans[i]!=ans[n-1-i])
            return false;
        }
        return true;
        
    }
};