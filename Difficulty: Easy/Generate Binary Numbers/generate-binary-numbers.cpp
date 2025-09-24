class Solution {
  public:
  string binary(int n)
  {
      string res="";
      while(n>0)
      {
          if(n%2==0)
          res+='0';
          else
          res+='1';
          n=n/2;
      }
      reverse(res.begin(),res.end());
      return res;
  }
    vector<string> generateBinary(int n) {
        // code here
        vector<string>ans;
        for(int i=1;i<=n;i++)
        {
            ans.push_back(binary(i));
        }
        return ans;
        
    }
};