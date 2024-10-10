#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

int main(){
    int n, e;
    cin>>n>>e;
    vector<int>arr[n];
    while(e--){
        int a, b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        vector<int>v;
        for(auto &it:arr[x])
            v.push_back(it);
        if(v.empty()){
            cout<<-1<<endl;
            continue;
        }
        sort(v.rbegin(), v.rend());
        for(auto &it:v)
            cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}