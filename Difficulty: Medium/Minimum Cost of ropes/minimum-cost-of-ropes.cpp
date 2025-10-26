class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<arr.size();i++)
        {
            pq.push((arr[i]));
        }
        long long sum=0;
        while(pq.size()>1)
        {
            if(pq.size()==1)
            {
                sum+=pq.top();
                return sum;
            }
            int k=pq.top();
            pq.pop();
            int l=pq.top();
            pq.pop();
            sum+=(k+l);
            pq.push(k+l);
        }
        return sum;
    }
};