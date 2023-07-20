#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int max=INT_MIN;
    int min=INT_MAX;
    int a[10]={2,3,4,1,55,67,78,98,24,79};
    for(int i=0;i<10;i++){
        if(a[i]<min){
            min=a[i];
        }
        else{
            if(a[i]>max){
                max=a[i];
            }
        }
    }

    cout<<"the min no is "<<min<<endl;
    cout<<"the max no is "<<max<<endl;
    return 0;
}