#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int>a;
int dp[1005][1005];

//using top down approach
bool subsetSum(int n, int s){
    if(n==0){
        return s==0;
    }
    if(dp[n][s]!=-1){
        return dp[n][s];
    }
    if(a[n-1]>s){
        return dp[n][s]=subsetSum(n-1, s);//nibo nah
    }
    else{
        return dp[n][s]=subsetSum(n-1, s-a[n-1]) || subsetSum(n-1, s);//nibo or nibo nah
    }
}

int main(){
    FAST
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    int i, x;
    for(i=0; i<n; i++){
        cin>>x;
        a.push_back(x);
    }
    int s;
    cin>>s;
    cout<<(subsetSum(n, s)?"YES":"NO")<<endl;
    return 0;
}