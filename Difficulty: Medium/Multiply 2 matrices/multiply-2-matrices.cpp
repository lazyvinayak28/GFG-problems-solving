class Solution {
  public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        int n=mat1.size();
        vector<vector<int>> v(n, vector<int>(n));
        if(mat1.size()!=mat2.size()){
            return v;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int val=0;
                for(int k=0;k<n;k++){
                    val=val+mat1[i][k]*mat2[k][j];
                }
                v[i][j]=val;
            }

        }
        return v;
        
    }
};