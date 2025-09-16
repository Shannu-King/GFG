
class Solution {
  public:
  int fun(int a,int b,string c)
  {
      
      if(c=="+")
      return a+b;
      else if(c=="-")
      return a-b;
      else if(c=="^")
      return pow(a,b);
      else if(c=="*")
      return a*b;
      else
      return floor(a/(double)b);
  }
    int evaluatePostfix(vector<string>& arr) {
        // code here
        stack<string>st;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!="+"&&arr[i]!="-"&&arr[i]!="*"&&arr[i]!="/"&&arr[i]!="^")
            st.push(arr[i]);
            else
            {
                int a=stoi(st.top());
                st.pop();
                int b=stoi(st.top());
                st.pop();
                int ans=fun(b,a,arr[i]);
                st.push(to_string(ans));
            }
        }
        return stoi(st.top());
    }
};

