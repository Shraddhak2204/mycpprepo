#include<iostream>
using namespace std;
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
    cout<<"string after reversing is->"<<name;
}

int main(){
    char name[20];
    cin>>name;
    cout<<"your name is "<<name<<endl;
    int len=getLength(name);
cout<<"length of string is "<<len<<endl;
reverse(name,len);
    return 0;
}