#include<iostream>
using namespace std;

int main(){
    
    int arr[5]={10,60,90,80,30};
    int size=5;
   int s=0;
   int e=size-1;
while(s<=e){
    if(arr[s]==arr[e]){
        cout<<arr[s];
        break;
    }
    else{
    cout<<arr[s++]<<" ";
    cout<<arr[e--]<<" ";
}
}

    return 0;
}