// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        map<char,int>mp1;
        map<char,int>mp2;
        int c=0;
        for(int i=0;i<pat.size();i++)
        mp1[pat[i]]++;
        for(int i=0;i<pat.size();i++)
        {
            mp2[txt[i]]++;
           
        }
      if(mp1==mp2)
      {
          c++;
         
      }
        for(int i=pat.size();i<txt.size();i++)
        {
            mp2[txt[i-pat.size()]]--;
            if( mp2[txt[i-pat.size()]]==0)
            mp2.erase(txt[i-pat.size()]);
            mp2[txt[i]]++;
            if(mp1==mp2)
            {
                c++;
                
            }
            
        }
        return c;
        
    }
};