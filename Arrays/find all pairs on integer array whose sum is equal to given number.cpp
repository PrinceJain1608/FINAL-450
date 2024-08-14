class Solution {
  public:
    int getPairsCount(const vector<int>& arr, int k) {
        // int count=0;
        // for(int i=0;i<arr.size();i++){
        //     for(int j=i+1;j<arr.size();j++){
        //         if(arr[i]+arr[j]==k){
        //             count++;
        //         }
        //         else{
        //             continue;
        //         }
        //     }                //TLE
        // }
        // return count;
        
        int ans=0;
        map<int,int> mp;
        for(auto x:arr){
            ans=ans+mp[k-x];
            mp[x]++;
        }
        return ans;
    }
};