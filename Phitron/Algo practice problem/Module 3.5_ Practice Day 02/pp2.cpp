#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

vector<int>ar[1005];
bool vis[1005];
// int cnt=0;
void dfs(int src){
    vis[src] = true;
    for(auto child:ar[src])
        if(!vis[child]){
            // cnt++;
            vis[child] = true;
            dfs(child);
        }
}

    
int main(){
    int n, e;
    cin>>n>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    // int src;
    // cin>>src;
    memset(vis, false, sizeof(vis));
    int cnt=0;
    for(int i=0; i<n; i++)
        if(!vis[i]){
            dfs(i);
            cnt++;
        }
    cout<<cnt<<endl;
    return 0;
}