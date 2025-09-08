class Solution {
  public:
  int fun(int n)
  {
      int temp=0;
      while(n>0)
      {
          temp=temp*10+(n%10);
          n=n/10;
      }
      return temp;
  }
    int reverseExponentiation(int n) {
        // code here
       int rev=fun(n);
       return pow(n,rev);
    }
};