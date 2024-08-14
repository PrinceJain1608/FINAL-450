class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        vector<int> ans(2,-1);
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                ans[0]=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==x){
                ans[1]=i;
                break;
            }
        }
        return ans;
    }
};