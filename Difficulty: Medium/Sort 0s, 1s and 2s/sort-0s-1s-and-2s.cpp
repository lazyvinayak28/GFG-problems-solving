class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n=arr.size();
        int l=0,h=n-1,p=0;
        while(p<=h){
            if(arr[l]==0){l++;p++;}
            else if(arr[h]==2){h--;}
            else if(arr[p]==0){swap(arr[p],arr[l]);l++;}
            else if(arr[p]==2){swap(arr[p],arr[h]);h--;}
            else{p++;}
        }        
        
    }
};