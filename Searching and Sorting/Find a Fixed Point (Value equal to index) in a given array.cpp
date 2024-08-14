class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
       vector<int> ans;
       int n=arr.size();
       for(int i=0;i<n;i++){
           if(arr[i]==i+1){
               ans.push_back(arr[i]);
           }
       }
       return ans;
    }
};