#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
typedef vector<int> vi;
typedef pair<int, int> pii;

bool valid(int x, vi &vec){
    for(auto &it:vec){
        if((x^it)>=it)
            return false;
    }
    return true;
}

int mxBit(vi &vec){
    int mxEmt = *max_element(vec.begin(), vec.end());
    return 32 - __builtin_clz(mxEmt);
}

void solve(){
    int n;
    cin >> n;
    vi vec(n);
    int i;
    for (i = 0; i < n; i++)
        cin >> vec[i];
    int mxbit = mxBit(vec);
    int upL = (1 << mxbit) - 1;
    int cnt = 0;
    for (i = 1; i <= upL; i++){
        if(valid(i, vec))
            cnt++;
    }
    cout << cnt << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}