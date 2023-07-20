#include<iostream>
using namespace std;
bool search(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={2,4,7,-2,22,34,90,76,8,-60};
    int key;
    cout<<"enter a key"<<endl;
    cin >>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"key is present";
    }
    else{
        cout<<"key is absent";
    }

    return 0;
}