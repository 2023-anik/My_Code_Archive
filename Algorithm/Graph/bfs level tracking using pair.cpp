#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int>v[1005];
bool vis[1005];

void bfs(int src, int val){
    queue<pair<int, int>>q;
    q.push({src, 0});
    vis[src] = true;
    while(!q.empty()){
        pair<int,int> p = q.front();
        int par = p.first;
        int level = p.second;
        q.pop();

        if(par==val){
            cout<<level<<endl;
            return;
        }

        for(int child:v[par]){
            if(!vis[child]){
                q.push({child, level+1});
                vis[child] = true;
            }
        }
    }
    cout<<"pai nai"<<endl;
    return;
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
    bfs(src, x);

    return 0;
}