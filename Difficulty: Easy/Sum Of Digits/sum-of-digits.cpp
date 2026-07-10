class Solution {
  public:
    int sumOfDigits(int n) {
        if(n/10==0){return n%10;}
        int s=(n%10)+sumOfDigits(n/10);
        return s;
        
    }
};