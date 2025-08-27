class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                for(int k=j+1;k<arr.size();k++)
                {
                    if((arr[i]+arr[j])>arr[k])
                    c++;
                    else
                    break;
                }
            }
        }
        return c;
    }
};
