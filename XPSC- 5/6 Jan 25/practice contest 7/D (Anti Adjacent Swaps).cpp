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
    vi a(n);
    for(auto &it:a)
        cin >> it;

    if(n==1){
        no;
        return;
    }

    vi e, o;
    int i;
    for (i = 0; i<n; i++)
        if(i%2==0)
            e.push_back(a[i]);
        else
            o.push_back(a[i]);

    sort(all(e));
    sort(all(o));
    int ie = 0, io = 0;
    for (i = 0; i < n; i++)
        if(i%2==0)
            a[i] = e[ie++];
        else
            a[i] = o[io++];
    for (i = 0; i < n-1; i++)
        if (a[i] > a[i+1]){
            no;
            return;
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