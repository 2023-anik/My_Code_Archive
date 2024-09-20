#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int n, e;
    cin>>n>>e;
    vector<pair<int,int>>v; 
    while(e--){
        int a, b;
        cin>>a>>b;
        v.push_back({a, b});
    }
    
    for(pair<int,int> p:v)
        cout<<p.first<<" "<<p.second<<endl;

    return 0;
}