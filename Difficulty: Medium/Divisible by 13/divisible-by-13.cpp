class Solution {
  public:
    bool divby13(string &s) {
        // code here
        int mod=0;
        for(char  ch:s)
        {
            int a=ch-'0';
            mod=(mod*10+a)%13;
            
        }
        return mod==0;
    }
};