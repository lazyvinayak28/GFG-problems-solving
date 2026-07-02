class Solution {
  public:
    bool isPalindrome(string& s) {
        string x=s;
        reverse(s.begin()+0,s.begin()+s.size());
        if(x==s){return true;}
        else{return false;}
        
    }
};