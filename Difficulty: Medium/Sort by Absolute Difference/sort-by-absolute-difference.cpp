class Solution {
  public:
  
struct Compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first != b.first) {
            return a.first > b.first;
        }
        return a.second > b.second;
    }
};
    void rearrange(vector<int> &arr, int x) {
        // code here
 priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
 vector<int>res(arr.size());
           for(int i=0;i<arr.size();i++)
           {
               pq.push({abs(arr[i]-x),i});
           }
           int k=0;
           while(!pq.empty())
           {
             res[k++]=arr[pq.top().second];
              pq.pop();
           }
           arr=res;
           
    }
};