#include<iostream>
#include<vector>
using namespace std;
void sortArray(int arr[],int n){
  for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}
vector<int> intersection(int arr1[],int a,int arr2[],int b){
  vector<int> arr3;
  sortArray(arr1,a);
  sortArray(arr2,b);
  int p=0,q=0;
  while(p<a && q<b){
    if(arr1[p]==arr2[q]){
      arr3.push_back(arr1[p]);
      p++;
      q++;
    }
    else if(arr1[p]<arr2[q]){
      p++;
    }
    else{
      q++;
    }
  }
  return arr3;
}
  void printArray(vector<int> arr,int n){
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }cout<<endl;
  }

int main(){
  int arr1[7]={3,5,9,0,3,3,2};
  int arr2[8]={5,0,8,4,7,3,3,3};
  vector<int> result=intersection(arr1,7,arr2,8);
  printArray(result,result.size());
}