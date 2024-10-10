#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

int n, m;
char ar[100][100];
bool vis[100][100];
int level[100][100];
vector<pair<int,int>> d = {{0, 1},
                           {0, -1},
                           {-1, 0},
                           {1, 0}};

bool valid(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while(!q.empty()){
        pair<int,int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for(int i=0; i<4; i++){
            int ci = a+d[i].first;
            int cj = b+d[i].second;
            if(valid(ci, cj) && !vis[ci][cj]){
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[a][b]+1;
            }
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>ar[i][j];
    
    int si, sj;
    cin>>si>>sj;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(si, sj);
    cout<<level[2][3];

    return 0;
}