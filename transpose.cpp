#include<iostream>
using namespace std;
void transpose(int arr[][3],int row,int col){
    int brr[3][3];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            brr[j][i]=arr[i][j];
        }
    }
    cout<<"printing the transpose matrix: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}

int main(){
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"printing the orginal matrix: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    transpose(arr,3,3);
    return 0;
}