class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        // code here
      stack<pair<int,int>>st;
      for(int i=0;i<color.size();i++)
      {
          if(!st.empty())
          {
              if(st.top().first==color[i]&&st.top().second==radius[i]){
              st.pop();
                  continue;
              }
          }
          st.push({color[i],radius[i]});
      }
     return st.size();
    }
};