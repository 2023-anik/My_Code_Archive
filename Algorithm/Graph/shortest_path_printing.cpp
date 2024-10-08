#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int>v[1005];
bool vis[1005];
int parent[1005];

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()){
        int par = q.front();
        q.pop();

        for(int child:v[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                parent[child] = par;
            }
        }
    }  
}

int main(){
    memset(v, 0, sizeof(v));
    int n, e;
    cin>>n>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);//for undirected graph
    }
    int src, x;
    cin>>src>>x;
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    vector<int>path;
    bfs(src);
    while(x!=-1){
        path.push_back(x);
        x = parent[x];
    }

    reverse(path.begin(), path.end());

    for(int val:path)
        cout<<val<<endl;

    return 0;
}