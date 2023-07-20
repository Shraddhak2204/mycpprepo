#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}
int lastOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        if(key>arr[mid]){
            end=mid-1;
        }
        if(key<arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}

int main(){
    int arr[12]={1,2,3,3,3,3,3,3,3,3,3,5};
    cout<<"the first occurence of 3 is at index "<<firstOcc(arr,12,3)<<endl;
    cout<<"the last occurence of 3 is at index "<<lastOcc(arr,12,3)<<endl;
    return 0;
}