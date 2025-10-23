class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Your code here
        vector<vector<int>>res;
        priority_queue<pair<double, pair<int, int>>, vector<pair<double, pair<int, int>>>, greater<pair<double, pair<int, int>>>> q;

        for(int i=0;i<points.size();i++)
        {
            int a=points[i][0]*points[i][0];
            int b=points[i][1]*points[i][1];
           double dis=sqrt(a+b);
            q.push({dis,{points[i][0],points[i][1]}});
        }
        while(k--)
        {
            auto p=q.top();
            res.push_back({p.second.first,p.second.second});
            q.pop();
        }
        return res;
        
        
    }
};
