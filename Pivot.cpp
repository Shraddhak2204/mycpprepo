#include<iostream>
using namespace std;
int getPivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;//first line me hai mid humara abhi
        }
        else{
            e=mid; //second line me kahi h mid ab
        }
        mid=s+(e-s)/2;
    }
    return e;
}

int main(){
    int arr[5]={8,10,19,1,3};
    cout<<"the index of pivot element is "<<getPivot(arr,5)<<endl;
    return 0;
}