#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

void solve(){
    int a, b;
    cin>>a>>b;
    int x = (a%10)*10+(a/10);
    int y = (b%10)*10+(b/10);
    x>y || a>b || x>b || a>y?yes:no;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}