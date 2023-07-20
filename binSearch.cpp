#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            e=mid-1;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;

}

int main(){
    int even[8]={1,3,5,6,7,12,16,30};
    int odd[5]={2,4,6,17,34};
    int evenIndex=binarySearch(even,8,12);
    cout<<"the index of 12 is "<< evenIndex<<endl;
     int oddIndex=binarySearch(odd,5,1);
    cout<<"the index of 17 is "<< oddIndex<<endl;
    return 0;
}