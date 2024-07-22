class Solution{
  public:
    int minJumps(int arr[], int n){
        int jumps=0;
        if(n==0 || n==1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
        int current=0;
        int maxJump=0;
        for(int i=0;i<n;i++){
            maxJump=max(maxJump,i+arr[i]);
            if(i==current){
                jumps++;
                current=maxJump;
            }
            if(current>=n-1){
                return jumps;
            }
        }
        return -1;
            
    }
};