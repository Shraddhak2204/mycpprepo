#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[3][3],int row,int col){
    int maxi=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}
int findMin(int arr[3][3],int row,int col){
    int mini=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}

int main(){
    int arr[3][3]={{2,4,1},{12,544,67},{90,33,65}};
    cout<<"the maximum no is: "<<findMax(arr,3,3)<<endl;
    cout<<"the minimum no is: "<<findMin(arr,3,3)<<endl;
    return 0;
}