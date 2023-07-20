#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapAlternate(int arr[], int size){
for(int i=0;i<size;i+=2){
    if(i+1<size){
        swap(arr[i],arr[i+1]);
    }

}
}

int main(){
    int even[6]={33,54,6,2,43,7};
    int odd[5]={11,9,54,23,8};
    swapAlternate(even, 6);
    printArray(even ,6);
    cout<<endl;
    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}