#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int>mat[1005];
bool vis[1005];
int level[1005];

void bfs(){
    queue<int>q;
    q.push(0);
    vis[0] = true;
    level[0] = 0;
    while(!q.empty()){
        int par = q.front();
        q.pop();

        //ja korar ekhane korte hobe
        

        //traversing at a parent node to find child using adjacency list
        for(auto child : mat[par])
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[par]+1;
            }

    }
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
    int l; cin>>l;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs();
    vector<int>v;
    for(int i=0; i<n; i++)
        if(level[i]==l)
            v.push_back(i);
    
    sort(v.rbegin(), v.rend());
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;

    return 0;
}