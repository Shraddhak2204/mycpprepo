#include<iostream>
using namespace std;
void moveNegative(int arr[], int n){
    int i=0, j=n-1;
    while(i<=j){
        while(arr[i]<0){ // swap when a positive element is encountered
            i++;
        }
        while(arr[j]>0){ // swap when a negative element is encountered
            j--;
        }
        while(arr[i]>0 && arr[j]<0 && i<=j){
        swap(arr[i], arr[j]); // swap the elements
        i++;
        j--;
    }
    }
}
int main(){
    int n = 7;
    int arr[n] = {2, -3, -1, 5,8,-7, -4};
    moveNegative(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}