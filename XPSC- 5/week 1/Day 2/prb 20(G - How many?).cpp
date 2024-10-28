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
    int s, t;
    cin >> s >> t;
    int i, j, k, cnt = 0;
    for (i = 0; i <= s; i++)
        for (j = 0; j <= s; j++)
            for (k = 0; k <= s; k++)
                if (i + j + k <= s && i * j * k <= t)
                    cnt++;
    cout << cnt << endl;

    // int i, j, cnt = 0, kSum, kMul;
    // for (i = 0; i <= s; i++)
    //     for (j = 0; j <= s; j++){
    //         if(i+j>s)
    //             break;
    //         kSum = s - (i + j);
    //         if (t == 0 && i != 0 && j != 0) continue;
    //         kMul = (i == 0 || j == 0) ? kSum : min(kSum, t / (i * j));
    //         if(kMul>=0)
    //             cnt += (kMul + 1);
    //     }
    // cout << cnt << endl;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}