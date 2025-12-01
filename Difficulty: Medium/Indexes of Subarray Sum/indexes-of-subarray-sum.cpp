class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int l=0;
        int s=0;
        for(int r=0;r<arr.size();r++)
        {
            s+=arr[r];
            while(s>target){
            s-=arr[l];
                l++;
            }
            if(s==target)
            return {l+1,r+1};
        }
        return {-1};
    }
};