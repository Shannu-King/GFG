class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        vector<int>res;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            res.push_back(mat[i][j]);
        }
        sort(res.begin(),res.end());
        int mn=res.size()/2;
        return res[mn];
    }
};
