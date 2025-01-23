#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int knapsack(int n, int w, const vector<int> &wt, const vector<int> &val){
    vector<vector<int>> dp(n+1, vector<int>(w+1, 0));
    int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=w; j++){
            if(wt[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=max(val[i-1]+dp[i-1][w-wt[i-1]], dp[i-1][j]);
            }
        }
    }
    return dp[n][w];
}

int main(){
    FAST
    int n, w;
    cin>>n>>w;
    vector<int> wt(n), val(n);
    for(auto &it:wt){
        cin>>it;
    }
    for(auto &it:val){
        cin>>it;
    }
    cout<<knapsack(n-1, w, wt, val)<<endl;
    return 0;
}