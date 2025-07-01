class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        int freq[26]={0};
        int c=0;
        int co=0;
        for(int i=0;i<k;i++)
        {
           freq[s[i]-'a']++;
        }
       for(int i=0;i<26;i++)
       {
           if(freq[i]>=1)
           co++;
       }
       if(co==k-1)
       c++;
        for(int i=k;i<s.size();i++)
        {
            freq[s[i-k]-'a']--;
            freq[s[i]-'a']++;
            co=0;
        for(int i=0;i<26;i++)
       {
           if(freq[i]>=1){
    
           co++;
           }
       }
       if(co==k-1)
       c++;
           
        }
        return c;
    }
};