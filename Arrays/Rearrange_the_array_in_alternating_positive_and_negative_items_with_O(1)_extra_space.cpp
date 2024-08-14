#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int arr1(int arr[],int n){
  vector<int> ans;
  vector<int> solve;
  for(int i=0;i<n;i++){
    if(arr[i]<0){
      ans.push_back(arr[i]);
      sort(ans.begin(),ans.end());
    }
    else{
      solve.push_back(arr[i]);
      sort(solve.begin(),solve.end());
    }
  }
  vector<int> dsa;

  for(int j=0;j<n;j++){
    dsa.push_back(ans[j++]);
    dsa.push_back(solve[j++]);

  }
  return {};
  
}

void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}
int main(){
  int arr[6]={1,2,3,-4,-1,4};
  arr1(arr,6);
  print(arr,6);
}