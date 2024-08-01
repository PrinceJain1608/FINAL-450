class Solution {
  public:
    int countSquares(int N) {
        //return sqrt(N-1);
        int count=0;
        for(int i=1;i*i<N;i++){
            count++;
        }
        return count;
    }
};