//https://codeforces.com/problemset/problem/1506/D

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
    vi freq(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    priority_queue<int> pq;
    for (int i = 1; i <= n; i++) {
        if (freq[i] > 0) {
            pq.push(freq[i]);
        }
    }

    while (pq.size() > 1) {
        int top1 = pq.top();
        pq.pop();
        int top2 = pq.top();
        pq.pop();
        top1--;
        top2--;
        if (top1 > 0) pq.push(top1);
        if (top2 > 0) pq.push(top2);
    }

    if (pq.empty()) {
        cout << 0 << endl;
    } else {
        cout << pq.top() << endl;
    }
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}