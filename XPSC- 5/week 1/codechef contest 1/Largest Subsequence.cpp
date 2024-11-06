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
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;
    int i;
    for (i = 0; i < n-1; i++){
        if(s[i]=='a' && s[i+1]=='b')
            cnt1++;
        if(s[i]=='b' && s[i+1]=='a')
            cnt2++;
    }
    int ans1 = n, ans2 = n;
    char first = s[0], last = s[n - 1];
    if (cnt1 == cnt2)
        cout << n << endl;
    else{
        for (i = 0; i < n; i++){
            if(s[i]!=first)
                break;
            ans1--;
        }
        for (i = n - 1; i >= 0; i--){
            if(s[i]!=last)
                break;
            ans2--;
        }
        cout << max(ans1, ans2) << endl;
    }
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}