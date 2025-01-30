// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n, m;
int a[11][11];

int res(int i, int j){
    if(i == n-1 && j == m-1){
        return a[i][j];     
    }
    if(i == n+1 || j == m+1){
        return INT_MIN;
    }
    return a[i][j] + max(res(i+1, j), res(i, j+1));
}

int main(){
    FAST
    cin >> n >> m;
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    cout << res(0, 0) << endl;
    return 0;
}