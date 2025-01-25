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
                dp[i][j]=dp[i-1][j];//nibo na
            }else{
                dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);//max(nibo, nibo na)
            }
        }
    }
    // for(auto &it:dp){
    //     for(auto &i:it){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    return dp[n][w];
}

int main(){
    FAST
    int n, w;
    cin>>n>>w;
    vector<int> wt(n), val(n);
    int x, y;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        wt[i]=x;
        val[i]=y;
    }
    cout<<knapsack(n, w, wt, val)<<endl;
    
    return 0;
}