#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

vector<int>arr[1005];
bool vis[1005]={0};

int dfs(int src, int count){
    vis[src] = true;
    for(auto child:arr[src])
        if(!vis[child]){
            vis[child] = true;
            dfs(child, ++count);
        }
    return count;
}

int main(){
    int n, e;
    cin>>n>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    vector<int>v;
    for(int i=0; i<n; i++)
        if(!vis[i]){
            v.push_back(dfs(i, 0));
        }
    for(auto x:v)
        cout<<x<<' ';
    return 0;
}