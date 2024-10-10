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
    if(ci < 0 || ci >= n || cj < 0 || cj >= m)
        return false;
    return true;
}

void dfs(int ai, int aj){
    vis[ai][aj] = true;
    for(int i = 0; i < 4; i++){
        int ci = ai + d[i].first;
        int cj = aj + d[i].second;
        if(valid(ci, cj) && !vis[ci][cj] && arr[ci][cj] == '.')
            dfs(ci, cj);
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
        
    memset(vis, false, sizeof(vis));
    int apartmentCount = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(arr[i][j] == '.' && !vis[i][j]){
                dfs(i, j);
                apartmentCount++;
            }

    cout << apartmentCount << endl;
    return 0;
}
