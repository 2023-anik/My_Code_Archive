#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int>mat[1005];
bool vis[1005];

void bfs(int src, int des){
    queue<pair<int,int>> q;
    q.push({src, 0});
    while(!q.empty()){
        pair<int,int> p = q.front();
        int par = p.first;
        int level = p.second;
        q.pop();

        if(par==des){
            cout<<level<<endl;
            return;
        }

        for(auto child:mat[par]){
            if(!vis[child]){
                q.push({child, level+1});
                vis[child] = true;
            }
        }
    }
    cout<<-1<<endl;
    return;
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
    int q;
    cin>>q;
    while(q--){
        int src, des;
        cin>>src>>des;
        memset(vis, false, sizeof(vis));
        bfs(src, des);
    }
    return 0;
}