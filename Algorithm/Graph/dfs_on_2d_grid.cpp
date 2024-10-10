#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

char a[20][20];
bool vis[20][20];
vector<pair<int,int>> d = {{0, 1},//for moving right
                        {0, -1},//for moving left
                        {-1, 0},//for moving up
                        {1, 0}//for moving down
                        };
int n, m;//n=row's num & m=column's num

bool valid(int ci, int cj){
    if(ci<0 || ci>=n || cj<0 || cj>=m)
        return false;
    return true;
}

void dfs(int si, int sj){
    cout<<si<<" "<<sj<<endl;
    vis[si][sj] = true;
    for(int i=0; i<4; i++){//for moving right, left, up & down that's why 4
        int ci = si+d[i].first;
        int cj = sj+d[i].second;
        if(valid(ci, cj) && !vis[ci][cj])
            dfs(ci, cj);    
    }
}

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];
    
    int si, sj; //si=source i, sj=source j
    cin>>si>>sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    return 0;
}