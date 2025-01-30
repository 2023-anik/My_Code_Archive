// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

long long n;
unordered_map<long long, bool>dp;

bool reachVal(long long crnt){
    if(crnt>n){
        return false;
    }
    if(crnt==n){
        return true;
    }
    if(dp.count(crnt)){
        return dp[crnt];
    }
    return dp[crnt] = reachVal(crnt*10) || reachVal(crnt*20);
}


int main(){
    FAST
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        dp.clear();
        if(reachVal(1)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}