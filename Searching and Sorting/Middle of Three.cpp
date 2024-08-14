class Solution{
  public:
    int middle(int A, int B, int C){
        vector<int> ans;
        ans.push_back(A);
        ans.push_back(B);
        ans.push_back(C);
        sort(ans.begin(),ans.end());
        return ans[1];
    }
};