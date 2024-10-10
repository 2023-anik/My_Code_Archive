#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int>mat[1005];
bool vis[1005];

int bfs(int node){
    vis[node] = true;
    int cnt = 0;
    for(auto child:mat[node])
        if(!vis[child]){
            cnt++;
            vis[child] = true;
        }
    return cnt;
}

int main(){
    // memset(mat, 0, sizeof(mat));
    int n, e;
    cin>>n>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int node;
    cin>>node;
    memset(vis, false, sizeof(vis));
    cout<<bfs(node)<<endl;
    return 0;
}