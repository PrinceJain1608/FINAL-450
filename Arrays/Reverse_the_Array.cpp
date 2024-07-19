#include<iostream>
using namespace std;
int reverseArray(int arr[],int n){
  int s=0;
  int e=n-1;
  while(s<=e){
    swap(arr[s],arr[e]);
    s++;
    e--;
  }
}
  void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }

int main(){
  int arr[5]={1,2,3,4,5};
  reverseArray(arr,5);
  printArray(arr,5);
}