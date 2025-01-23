#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int N=100;
const int W=100;
vector<vector<int>> dp(N, vector<int>(W, -1));

int knapsack(int n, int w, const vector<int> &wt, const vector<int> &val){
    if(n==-1 || w==0){
        return 0;
    }
    if(dp[n][w]!=-1){
        return dp[n][w];
    }
    if(wt[n]>w){
        return dp[n][w]=knapsack(n-1, w, wt, val);
    }
    return dp[n][w]=max(val[n]+knapsack(n-1, w-wt[n], wt, val), knapsack(n-1, w, wt, val));
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
    cout<<knapsack(n-1, w, wt, val)<<endl;// n-1 is passed because indexing is 0 based 

    return 0;
}