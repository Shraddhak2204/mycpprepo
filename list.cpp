#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int>n(5,100);
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    list<int>l1,l2;
    for(int i=0;i<10;i++){
        l1.push_front(2*i);
        l2.push_front(3*i);
    }
    for(auto j:l1){
        cout<<j<<" ";
    }cout<<endl;

    l1.reverse();
    for(int j:l1){
        cout<<j<<" ";
    }cout<<endl;
    

    
    return 0;
}