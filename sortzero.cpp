#include<iostream>
using namespace std;
 void sortArray(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(arr[s]==0 && s<e){
            s++;
        }
         if(arr[e]==1 && s<e){
            e--;
        }
        if(arr[s]==1 && arr[e]==1 && s<e){
            swap(arr[s],arr[e]);
            s++;
            e--;}
        
    }

 }
 void  printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

 }

int main(){
    int arr[6]={1,0,1,1,0,0};
    int arr1[5]={0,1,0,0,1};
    // int arr2[3]={1,0};
    sortArray(arr,6);
    printArray(arr,6);
    sortArray(arr,5);
    printArray(arr,5);
    // sortArray(arr,3);
    // printArray(arr,3);
    return 0;
}