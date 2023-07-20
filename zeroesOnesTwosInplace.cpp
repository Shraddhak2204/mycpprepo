#include<bits/stdc++.h>
using namespace std;
void sortInplace(vector<int>& v){
    // sort(v.begin(),v.end()); tc=o(nlogn) inbuilt sort function
    int h=v.size()-1;
    int l=0;
    int m=0;
    while(m<=h){
        if(v[m]==0){
            swap(v[m],v[l]);
            m++;
            l++;
        }
        else if(v[m]==1){
            m++;
        }
        else{
            swap(v[m],v[h]);{
                h--;
            }
        }
    }

}

int main(){
    vector<int>v{1,1,0,2,0,1,2,0,1};
    sortInplace(v);
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
cout<<endl;
    return 0;
}