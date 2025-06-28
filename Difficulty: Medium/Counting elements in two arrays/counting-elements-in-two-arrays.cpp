class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        sort(b.begin(),b.end());
        vector<int>ans;
        for(int i=0;i<a.size();i++)
        {
            int l=0;
            int r=b.size()-1;
            int mid=(l+r)/2;
            int c=0;
            while(l<=r)
            {
                if(b[mid]<=a[i]){
                    c+=mid-l+1;
                l=mid+1;
                   
                }
                else if(b[mid]>a[i])
                r=mid-1;
                mid=(l+r)/2;
            }
            ans.push_back(c);
        }
        return ans;
    }
};