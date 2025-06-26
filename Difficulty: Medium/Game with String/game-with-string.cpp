class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        int freq[26]={0};
        for(int i=0;i<s.size();i++)
        freq[s[i]-'a']++;
        priority_queue<int>pq;
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            pq.push(freq[i]);
        }
        while(k--)
        {
            int a=pq.top();
            pq.pop();
            a--;
            pq.push(a);
            
            
        }
        int ans=0;
        while(!pq.empty())
        {
            int a=pq.top();
            pq.pop();
            ans=ans+(a*a);
        }
        return ans;
    }
};