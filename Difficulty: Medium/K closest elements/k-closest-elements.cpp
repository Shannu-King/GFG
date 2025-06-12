class Solution {
  public:
  struct CustomCompare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first > b.first;
    }
};

    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
          priority_queue<pair<int, int>, vector<pair<int, int>>, CustomCompare> pq;
           for(int i=0;i<arr.size();i++)
           {
               if(arr[i]==x)
               continue;
               pq.push({abs(x-arr[i]),arr[i]});
               
           }
           vector<int>res;
           while(!pq.empty()&&k--)
           {
               res.push_back(pq.top().second);
               pq.pop();
           }
           return res;
    }
};