class Solution {
  public:
  void check(vector<int> temp,vector<int>arr,vector<vector<int>>&v){
      if(arr.size()==0){v.push_back(temp);return ;}
      temp.push_back(arr[0]);
      arr.erase(arr.begin());
      check(temp,arr,v);
      temp.pop_back();
      check(temp,arr,v);
      
  }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>>v;
        vector<int>temp;
        check(temp,arr,v);
        return v;
    }
};