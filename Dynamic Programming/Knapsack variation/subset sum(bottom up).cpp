#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n, s;
vector<int>a;
int dp[1005][1005];

bool subsetSum(){
    int i, j;
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
    cout<<(subsetSum()?"YES":"NO")<<endl;
    return 0;
}