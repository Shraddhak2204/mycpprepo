#include<iostream>
using namespace std;
void moveNegative(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        while(arr[i]<0 && i<j){ // move i until a positive element is encountered
            i++;
        }
        while(arr[j]>0 && i<j){ // move j until a negative element is encountered
            j--;
        }
        if(i<j){ // swap only when i is less than j
            swap(arr[i], arr[j]); // swap the elements
        }
    }
}
int main(){
    int n = 7;
    int arr[n] = {2, -3, -1, 5, 8,-7, -4};
    moveNegative(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}