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
    int cnt = 0;
    for(int i=0; i<n; i++)
        if(!vis[i]){
            dfs(i);
            cnt++;
        }
    cout<<"component - "<<cnt<<endl;
    return 0;
}