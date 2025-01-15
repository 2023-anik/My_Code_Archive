#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

char arr[1001][1001];
bool vis[1001][1001];

vector<pair<int,int>> d = {{0, 1},
                        {0, -1},
                        {-1, 0},
                        {1, 0}
                        };
int n, m;

bool valid(int ci, int cj){
    if(ci<0 || ci>=n || cj<0 || cj>=m)
        return false;
    return true;
}

bool flag = false;
void dfs(int ai, int aj){
    if(arr[ai][aj]=='B'){
        flag = true;
        return;
    }
    vis[ai][aj] = true;
    for(int i=0; i<4; i++){
        int ci = ai+d[i].first;
        int cj = aj+d[i].second;
        if(valid(ci, cj) && !vis[ci][cj] && arr[ci][cj]!='#')
            dfs(ci, cj);
    }
}

int main(){
    cin >> n >> m;
    int ai, aj;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'A'){
                ai = i;
                aj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    dfs(ai, aj);
    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}
