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

void solve() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    deque<char> dq;
    int up_cnt=0, lo_cnt=0;
    for(auto &it:s){
        if(it=='b'){
            lo_cnt++;
            continue;
        }
        if(it=='B'){
            up_cnt++;
            continue;
        }
        if(lo_cnt && islower(it)){
            lo_cnt--;
            continue;
        }
        if(up_cnt && isupper(it)){
            up_cnt--;
            continue;
        }
        dq.push_front(it);
    }
    for(auto &it:dq){
        cout<<it;
    }
    cout<<endl;
}

int32_t main() {
    FAST
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}