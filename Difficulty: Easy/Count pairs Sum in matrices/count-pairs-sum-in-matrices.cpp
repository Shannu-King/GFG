class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        vector<int>res;
        for(int i=0;i<mat1.size();i++)
        {
            for(int j=0;j<mat1[i].size();j++)
            {
                res.push_back(mat1[i][j]);
            }
        }
        int c=0;
        vector<int>res1;
        for(int i=0;i<mat2.size();i++)
        {
            for(int j=0;j<mat2[i].size();j++)
            {
                res1.push_back(mat2[i][j]);
            }
        }
        map<int,int>mp;
        for(int i=0;i<res.size();i++)
        {
            mp[res[i]]++;
        }
        for(int j=0;j<res1.size();j++)
        {
            int k=x-res1[j];
            if(mp[k])
            c++;
        }
        return c;
    }
};