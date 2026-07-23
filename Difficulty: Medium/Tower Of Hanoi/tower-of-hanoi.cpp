class Solution {
  public:
    void toh(int n,int s,int m,int d,int &c){
        if(n==0){return;}
        c=c+1;
        toh(n-1,s,d,m,c);
        toh(n-1,m,s,d,c);
    }
    int towerOfHanoi(int n, int from, int to, int aux) {
        int c=0;
        toh(n,from,aux,to,c);
        return c;
    }
};