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
    cin >> n;
    int sum = 0;
    vi oddVec;
    while(n--){
        cin >> x;
        sum += x;
        if(x%2!=0)
            oddVec.push_back(x);
    }
    if(sum%2==0)
        cout << sum << endl;
    else
        cout << sum - *min_element(all(oddVec)) << endl;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}