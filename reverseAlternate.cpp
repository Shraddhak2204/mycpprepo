#include<iostream>
using namespace std;
 void reverse(int arr[],int size){
    for(int i=0;i<size;i+=2){
     if(i+1<size){
        swap(arr[i],arr[i+1]);
       }
    }

 }
 void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
  }

int main(){
   int even[8]={23,45,65,1,21,0,34,78};
   int odd[5]={1,4,5,8,3};
   reverse(even, 8);
   printArray(even,8);
   cout<<endl;
   reverse(odd,5);
   printArray(odd,5);

    return 0;
}