class Solution {
  public:
    void rotateDeque(deque<int>& dq, int type, int k) {
        // code here
        vector<int>temp;
        int n=dq.size();
        if(type==1)
        {
            
            k=n-k;
          
            
        }
         for(int i=0;i<k;i++)
         {
             int q=dq.front();
             dq.pop_front();
             dq.push_back(q);
         }
           
    }
};