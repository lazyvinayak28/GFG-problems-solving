class Solution {
  public:
  void rev(string &s,string &ans,int i,int j){
      if(i>j){return ;}
      ans[i]=s[j];
      rev(s,ans,i+1,j-1);
  }
    bool isPalindrome(string& s) {
        string ans=s;
        int i=0,j=s.size()-1;
        rev(s,ans,i,j);
        if(ans==s){return true;}
        else{return false;}
    }
};