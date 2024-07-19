#include<iostream>
using namespace std;
void sortArray(int arr[], int n)
{   
   for(int i=1;i<n;i++){
      for(int j=0;j<n-i;j++){
         if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
         }
      }
   }
}
void maxi(int arr[],int n){
  sortArray(arr,n);
  cout<<"Max element in an array is:"<<arr[n-1];
  cout<<endl;
}
void mini(int arr[],int n){
  sortArray(arr,n);
  cout<<"Min element in an array is:"<<arr[0];
  cout<<endl;
}
int main(){
  int arr[5]={3,6,66,4,0};
  maxi(arr,5);
  mini(arr,5);
}