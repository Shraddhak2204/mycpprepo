#include<iostream>
#include<vector>
using namespace std;
void sortInplace(vector<int>& v){
    int zeroes=0;
    int ones=0;
    int two=0;
for(int i=0;i<v.size();i++){
    if(v[i]==0){
        zeroes++;
    }
   else if(v[i]==1){
        ones++;
    }
    else{
        two++;
    }
}
int j=0;
while(zeroes--){
    v[j]=0;
    j++;
}
while(ones--){
    v[j]=1;
    j++;
}
while(two--){
    v[j]=2;
    j++;
}
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;
}


int main(){
    vector<int>v{2,0,2,1,1,0};
    sortInplace(v);
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
    return 0;
}