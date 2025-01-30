#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N=1e6+5;

vector<int> dp(N,-1);

// Top Down Approach
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fibo(n-1)+fibo(n-2);
    return dp[n];
}

int main(){
    FAST
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}