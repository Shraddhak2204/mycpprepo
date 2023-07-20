#include<iostream>
using namespace std;
int reverse(int arr[],int n){
    int start=0;
    int end=n-1;
   while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
   }
}
int printArray(int a[],int n){
    cout<<"printing the array "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
      cout<<endl;

}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int a[5]={3,5,7,8,2};
    reverse(arr,6);
    reverse(a,5);
 printArray( arr,6);
 printArray(a,5);
    return 0;
}