class Solution {
  public:
    void rotate(vector<int> &arr) {
        std::rotate(arr.begin(), arr.begin()+arr.size()-1, arr.end());
    }
};