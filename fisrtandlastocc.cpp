#include<iostream>
using namespace std;
int getfirstOcc(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        if(arr[mid]>key){
            e=mid-1;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int getlastOcc(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        if(arr[mid]>key){
            e=mid-1;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[16]={1,2,3,3,3,3,3,3,3,3,3,3,3,3,3,5};
    int lb=getfirstOcc(arr,16,3);
    int ub=getlastOcc(arr,16,3);
    cout<<"the first occurence of 3 is at index-->"<<lb<<endl;
    cout<<"the last occurence of 3 is at index-->"<<ub<<endl;
    cout<<"the max no of times 3 occured "<<(ub-lb+1)<<endl;
    return 0;
}