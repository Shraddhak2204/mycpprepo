#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5];
    // memset(a,0,sizeof(a));
    fill_n(a,5,8);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}