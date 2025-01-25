#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n, s;
vector<int>a;
bool dp[1005][1005];

//bottom up approach
bool subsetSum(){
    int i, j;
    for(i=1; i<=n; i++){
        for(j=0; j<=s; j++){
            if(a[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
            }
        }
    }
    return dp[n][s];
}

int main(){
    FAST
    cin>>n;
    int i, x;
    for(i=0; i<n; i++){
        cin>>x;
        a.push_back(x);
    }
    cin>>s;
    dp[0][0]=1;
    for(int i=1; i<=s; i++){
        dp[0][i]=0;
    }
    cout<<(subsetSum()?"YES":"NO")<<endl;
    return 0;
}