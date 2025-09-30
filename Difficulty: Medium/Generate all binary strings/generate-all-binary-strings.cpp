class Solution {
  public:
  string binary(int n,int t)
  {
      string ans="";
    
      while(n>0)
      {
          if(n%2==0)
          ans.push_back('0');
          else
          ans.push_back('1');
          n/=2;
      }
      while(ans.size()<t)
      ans.push_back('0');
      reverse(ans.begin(),ans.end());
      return ans;
  }
    vector<string> binstr(int n) {
        // code here
        vector<string>res;
        for(int i=0;i<pow(2,n);i++)
        {
            res.push_back(binary(i,n));
        }
        return res;
    }
};