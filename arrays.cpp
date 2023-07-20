#include<bits/stdc++.h>
using namespace std;
int minValue(int arr[],int size){
    int  mini = INT_MAX;
for(int i=0;i<size;i++){
    // if(arr[i]<min){
    //     min=arr[i];
    // }
mini=min(mini,arr[i]);
}
return mini;
}
int maxValue(int arr[],int size){
    int maxi = INT_MIN;
for(int i=0;i<size;i++){
    // if(arr[i]>max){
    //     max=arr[i];
    maxi=max(maxi,arr[i]);
    }
return maxi;
}
int main(){
    int size;
    cout<<"enter size: ";
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<endl;
    cout<<"maximum value is: "<<maxValue(num,size)<<endl;
    cout<<"minimum value is: "<<minValue(num,size)<<endl;
    return 0;
}