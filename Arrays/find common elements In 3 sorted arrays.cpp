class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
       vector<int> ans;
       int i=0,j=0,k=0;
       int a=arr1.size();
       int b=arr2.size();
       int c=arr3.size();
       while(i<a && j<b && k<c){
           if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
               ans.push_back(arr1[i]);
               i++;
               j++;
               k++;
               while(i<a && arr1[i]==arr1[i-1]){
                   i++;
               }
               while(j<b && arr2[j]==arr2[j-1]){
                   j++;
               }
               while(k<c && arr3[k]==arr3[k-1]){
                   k++;
               }
           }
           else if(arr1[i]<arr2[j]){
               i++;
           }
           else if(arr2[j]<arr3[k]){
               j++;
           }
           else{
               k++;
           }
       }
       if(ans.empty()){
           ans.push_back(-1);
       }
       return ans;
    }
};