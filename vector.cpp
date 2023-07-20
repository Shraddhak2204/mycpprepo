#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>v;
    vector<int>a(6,2);
    vector<int>last(a);
    for(auto i:last){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"capacity of vector a ->"<<a.capacity()<<endl;
    v.push_back(1);
    cout<<"v capacity->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"v capacity->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"v capacity->"<<v.capacity()<<endl;
    cout<<"no of elements->"<<v.size()<<endl;
    cout<<"max no of elements a vector can hold->"<<v.max_size()<<endl;
    a.resize(4);
    cout<<a.size();
    v.shrink_to_fit();
    cout<<"no of ele"<<v.size();
    cout<<endl;
      for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
  v.insert(v.begin(),5);
  for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.erase(v.begin());
       for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.clear();
   cout<<"size"<<v.size();
   v.swap(a);
   for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    

    
    
    return 0;
}