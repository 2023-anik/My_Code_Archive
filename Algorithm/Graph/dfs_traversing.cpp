#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

const int N = 1e4+5;
vector<int> mat[N];
bool vis[N];

void dfs(int src){
    cout<<src<<endl;
    vis[src] = true;
    for(int child:mat[src])
        if(!vis[child])
            dfs(child);
}

int main(){
    memset(mat, 0, sizeof(mat));
    
    int n, e;
    cin>>n>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    dfs(0);
    return 0;
}