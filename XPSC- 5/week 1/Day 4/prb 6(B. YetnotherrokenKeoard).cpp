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
        int ch_lower = 0, ch_upper = 0;
        deque<char> dq;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                ch_upper++;
                continue;
            }
            if (s[i] == 'b')
            {
                ch_lower++;
                continue;
            }
            if (ch_lower && islower(s[i]))
            {
                ch_lower--;
                continue;
            }
            if (ch_upper && isupper(s[i]))
            {
                ch_upper--;
                continue;
            }
            dq.push_front(s[i]);
        }
        for (auto &it : dq)
        {
            cout << it;
        }
        cout << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}