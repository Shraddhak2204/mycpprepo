#include<iostream>
using namespace std;

int main(){
    int a[7]={10,2,344,54,67,97,123};
    int s=0;
    int e=6;
   while(s!=e){
    a[s]=a[s]^a[e];
    a[e]=a[e]^a[s];
    a[s]=a[s]^a[e];
    s++;
    e--;
   }
   for(int i=0;i<7;i++){
    cout<<a[i]<<" ";
   }
    return 0;
}