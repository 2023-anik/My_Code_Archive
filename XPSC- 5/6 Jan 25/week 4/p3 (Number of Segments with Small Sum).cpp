//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C

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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for(auto &it:a)
        cin >> it;
    int i = 0, j = 0, sum = 0, cnt = 0;
    while (j < n){
        sum += a[j];
        while(sum > k && i <= j){
            sum -= a[i];
            i++;
        }
        cnt += (j - i + 1);
        j++;
    }
    cout << cnt << endl;
    return;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}