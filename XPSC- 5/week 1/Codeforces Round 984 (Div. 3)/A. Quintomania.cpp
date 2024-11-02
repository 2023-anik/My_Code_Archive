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

void solve(){
    int n;
    cin >> n;
    vi vec(n);
    int i;
    for (i = 0; i < n; i++)
        cin >> vec[i];
    for (i = 0; i<n-1; i++){
        if(abs(vec[i]-vec[i+1])!=5 && abs(vec[i]-vec[i+1])!=7){
            no;
            return;
        }
    }
    yes;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}