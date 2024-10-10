#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int>v[1005];
bool vis[1005];
int level[1005];

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    bool found = false;
    while(!q.empty()){
        int par = q.front();
        q.pop();

        //ja korar ekhane korte hobe
        // cout<<par<<endl;

        //traversing at a parent node to find child using adjacency list
        for(auto child : v[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[par]+1;
            }    
        }
    }
}

int main(){
    // memset(v, 0, sizeof(v));
    int n, e;
    cin>>n>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);//for undirected graph
    }
    int src;
    cin>>src;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(src);

    //to see the level
    for(int i=0; i<n; i++)
        cout<<i<<" "<<level[i]<<endl;

    return 0;
}