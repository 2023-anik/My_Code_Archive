#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int a, b, c, x;
    cin>>a>>b>>c>>x;
    int vol1 = a*b*c;
    int vol2 = pow(x, 3);
    if(vol1==vol2){
        cout<<"Equal"<<endl;
        return;
    }
    cout<<(vol1>vol2?"Cuboid":"Cube")<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}