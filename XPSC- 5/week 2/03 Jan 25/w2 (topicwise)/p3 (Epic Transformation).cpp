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
    map<int, int> mp;
    int x;
    while (n--){
        cin >> x;
        mp[x]++;
    }
    priority_queue<int> pq;//based on max heap

    for(auto &[x, y]:mp)
        pq.push(y);

    int top1, top2;
    while (!pq.empty()){
        if(pq.size()<2)
            break;
            
        top1 = pq.top();
        pq.pop();
        top2 = pq.top();
        pq.pop();

        top1--, top2--;

        if(top1>=1)
            pq.push(top1);
        if(top2>=1)
            pq.push(top2);
    }
    int ans = 0;
    while(!pq.empty()){
        ans += pq.top();
        pq.pop();
    }
    cout << ans << endl;
    return;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}