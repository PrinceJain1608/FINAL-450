class Solution {
  public:
    int doUnion(vector<int> arr1, vector<int> arr2) {
        set<int> arr;
        for(int i=0;i<arr1.size();i++){
            arr.insert(arr1[i]);
        }
        for(int i=0;i<arr2.size();i++){
            arr.insert(arr2[i]);
        }
        return arr.size();
    }
};