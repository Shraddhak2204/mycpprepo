#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3]={1,2,3};
array<int, 5>t;
t.fill(1);
for(int i=0;i<5;i++){
        cout<<"basic->"<<t[i]<<endl;
    } 
    array<int,5> a= {1,2,3,4,5};
    array<int,5>b={{3,4,5,6,8}};
    int size=a.size();
    cout<<"size is: "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    } 
   cout<<"element at 2nd index ->"<<a.at(2)<<endl;
   cout<<"empty or not->"<<a.empty()<<endl;
   cout<<"first element->"<<a.front()<<endl;
   cout<<"last element->"<<a.back()<<endl;
   cout<<"maximum elements array can hold is : "<<a.max_size()<<endl;



    return 0;
}