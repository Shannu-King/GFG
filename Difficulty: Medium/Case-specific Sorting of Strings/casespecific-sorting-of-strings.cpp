class Solution {
  public:
    string caseSort(string& s) {
        // code here
        string p;
        string q;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z'){
                p.push_back(s[i]);
                s[i]='c';
            }
            else 
            {
                 q.push_back(s[i]);
                s[i]='s';
            }
        }
       sort(p.begin(),p.end());
       sort(q.begin(),q.end());
       int k=0;
       int l=0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='s')
           {
               s[i]=q[l++];
           }
           else
           {
               s[i]=p[k++];
           }
       }
       return s;
    }
};