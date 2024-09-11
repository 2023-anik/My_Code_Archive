#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int>v[1005];
bool vis[1005];

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()){
        int par = q.front();
        q.pop();

        //ja korar ekhane korte hobe
        cout<<par<<endl;

        //traversing at a parent node to find child using adjacency list
        for(auto child : v[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
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
    int src;
    cin>>src;
    memset(vis, false, sizeof(vis));
    bfs(src);

    return 0;
}