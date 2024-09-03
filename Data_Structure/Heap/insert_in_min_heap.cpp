#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int n; cin>>n;
    vector<int>v;
    while(n--){
        int x; cin>>x;
        v.push_back(x);
        int current_idx=v.size()-1;
        while(!current_idx){
            int parent_idx=(current_idx-1)/2;
            if(v[current_idx]<v[parent_idx])
                swap(v[current_idx], v[parent_idx]);
            else
                break;
            current_idx=parent_idx;
        }
    }
    for(int x:v) cout<<x<<" ";
    return 0;
}