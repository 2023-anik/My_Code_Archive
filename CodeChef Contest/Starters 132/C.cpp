#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &it : a) cin >> it;
    for (auto &it : b) cin >> it;

    if (n < 4 || m < 4 || n + m < 11) {
        cout << -1 << endl;
        return;
    }

    sort(rall(a));
    sort(rall(b));

    int i, top_a = 0;
    for (i = 0; i < 4; i++) {
        top_a += a[i];
    }

    int top_b = 0;
    for (i = 0; i < 4; i++) {
        top_b += b[i];
    }
    int ans = 0;
    int cnt = 0, j=4;
    i=4; 
    while(cnt<3 && (i<n || j<m)){//11-8=3
        if(i<n && j<m){
            if(a[i]>b[j]){
                top_a+=a[i];
                i++;
            }else{
                top_b+=b[j];
                j++;
            }
        }else if(i<n){
            top_a += a[i];
            i++;
        }
        else if(j<m){
            top_b += b[j];
            j++;
        }
        cnt++;
    }
    cout<<top_a+top_b<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}