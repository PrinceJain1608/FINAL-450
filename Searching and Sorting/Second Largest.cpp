class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        if(arr.size()<2){
            return -1;
        }
        sort(arr.rbegin(),arr.rend());
        int largest=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=largest){
                return arr[i];
            }
        }
        return -1;
    }
  };