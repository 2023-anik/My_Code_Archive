#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int>> dp;

int knapsack(int n, int w, const vector<int> &wt, const vector<int> &val){
    if(n == 0 || w == 0){
        return 0;
    }
    if(dp[n][w] != -1){
        return dp[n][w];
    }
    if(wt[n-1] > w){
        return dp[n][w] = knapsack(n-1, w, wt, val);
    }
    return dp[n][w] = max(val[n-1] + knapsack(n-1, w-wt[n-1], wt, val), knapsack(n-1, w, wt, val));
}

int main(){
    FAST
    int n, w;
    cin >> n >> w;
    vector<int> wt(n), val(n);
    for(int i = 0; i < n; i++){
        cin >> wt[i] >> val[i];
    }
    dp.resize(n+1, vector<int>(w+1, -1));
    cout << knapsack(n, w, wt, val) << endl;

    return 0;
}