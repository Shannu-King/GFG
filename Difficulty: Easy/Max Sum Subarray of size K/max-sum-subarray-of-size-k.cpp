class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int maxx=0;
        int s=0;
        for(int i=0;i<k;i++)
        s+=arr[i];
        maxx=max(s,maxx);
        for(int i=k;i<arr.size();i++)
        {
            s+=(-arr[i-k]+arr[i]);
            maxx=max(s,maxx);
        }
        return maxx;
    }
};