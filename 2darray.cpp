#include<iostream>
using namespace std;
bool isFound(int arr[][4],int target,int row,int col){
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4];
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,16};
    //  int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
   // taking input row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //taking input column wise
    //   for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
cout<<"enter a element to search"<<endl;
cin>>target;
if(isFound(arr,target,3,4)){
    cout<<"element found"<<endl;
}
else{
    cout<<"not found"<<endl;
}
return 0;
  
}