#include<iostream>
#include<deque>
using namespace std;

int main(){
deque<int>q;
q.push_back(10);
q.push_front(20);
q.push_back(30);
q.push_front(60);
for(auto i:q){
  cout<<i<<" ";   
}cout<<endl;
q.pop_front();
for(auto i:q){
  cout<<i<<" ";   
}cout<<endl;
q.pop_back();
for(auto i:q){
  cout<<i<<" ";   
}cout<<endl;
cout<<"size->"<<q.size()<<endl;
cout<<"max size->"<<q.max_size()<<endl;
cout<<"2nd element->"<<q.at(1)<<endl;
cout<<q.front()<<endl;
cout<<q.back()<<endl;
}