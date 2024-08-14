class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
           stack<int> s;
           for(int i=0;i<n;i++){
               if(arr[i]<0){
                   s.push(arr[i]);
               }
           }
           for(int i=0;i<n;i++){
               if(arr[i]>=0){
                   s.push(arr[i]);
               }
           }
           for(int i=n-1;i>=0;i--){
               arr[i]=s.top();
               s.pop();
           }
        }
};