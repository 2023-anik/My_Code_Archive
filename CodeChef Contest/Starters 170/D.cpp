// https://www.codechef.com/problems/FROGS_JUMP

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    int x, oddCnt=0, evenCnt=0;
    int i;
    for(i=1; i<=n; i++){
        cin>>x;
        x%2==0?evenCnt++:oddCnt++;
    }
    cout<<max(evenCnt, oddCnt)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}