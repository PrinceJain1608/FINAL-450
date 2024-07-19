#include<iostream>
using namespace std;
void moveNegative(int arr[],int n){
  for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}
void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}
int main(){
  int arr[6]={6,3,5,-9,-44,-2};
  moveNegative(arr,6);
  printArray(arr,6);
}