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
    int n, x;
    cin >> n >> x;
    vi ai(n), bi(n), needed;
    int i, win = 0;
    for (i = 0; i < n; i++)
        cin >> ai[i];
    for(i=0; i<n; i++)
        cin >> bi[i];
    for (i = 0; i < n; i++){
        if (ai[i] > bi[i])
            win++;
        else
            needed.push_back(bi[i] - ai[i] + 1);
        }

    if(win >= (n / 2) + 1){
        yes;
        return;
    }
    sort(all(needed));
    for (auto &votes : needed) {
        if (x >= votes) {
            x -= votes;
            win++;
            if (win >= (n / 2) + 1) {
                yes;
                return;
            }
        } else {
            break;
        }
    }
    no;
}

int32_t main(){
    FAST
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}