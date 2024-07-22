class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        int low=arr[0]+k;
        int high=arr[n-1]-k;
        for(int i=0;i<n;i++){
            int mini=min(low,arr[i+1]-k);
            int maxi=max(high,arr[i]+k);
            if(mini<0){
                continue;
            }
            ans=min(ans,maxi-mini);
        }
        return ans;
    }
};