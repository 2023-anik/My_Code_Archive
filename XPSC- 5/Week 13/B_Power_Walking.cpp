#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    unordered_set<int>s;
    int x, i;
    for(i=1; i<=n; i++){
        cin>>x;
        s.insert(x);
    }
    int sn=(int)s.size();
    for(i=1; i<=n; i++){
        if(sn/i!=0){
            cout<<i*(sn/i)+(sn%i)<<" ";
        }else{
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}