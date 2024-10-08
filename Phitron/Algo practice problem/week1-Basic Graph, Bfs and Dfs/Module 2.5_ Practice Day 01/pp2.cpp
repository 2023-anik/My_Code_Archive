#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int>v[1005];
bool vis[1005];
vector<int>nv;

void bfs(int l){
    queue<pair<int,int>>q;
    q.push({0,0});
    vis[0] = true;
    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;

        if(level==l)nv.push_back(par);

        for(int child:v[par])
            if(!vis[child]){
                q.push({child, level+1});
                vis[child] = true;
            }
    }
}

int main(){
    memset(vis, false, sizeof(vis));
    int n, e;
    cin>>n>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int l; cin>>l;
    bfs(l);
    sort(nv.rbegin(), nv.rend());
    for(int c:nv)
        cout<<c<<' ';
    cout<<endl;
    return 0;
}