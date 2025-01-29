#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"YES"<<endl
#define no cout<<"nO"<<endl

/*
░█▀▀░█▀█░█▀▀░░░█▀▀░█▀▄░█▀▄░█▀█░█▀▄░█
░█▀▀░█░█░█▀▀░░░█▀▀░█▀▄░█▀▄░█░█░█▀▄░▀
░▀▀▀░▀▀▀░▀░░░░░▀▀▀░▀░▀░▀░▀░▀▀▀░▀░▀░▀
*/

void solve(){
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    vector<int> vol;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 0) {
            vol.push_back(i);
        }
    }
    vector<int> ans(n, 0);

    if (vol[0] > 0) {
        int k = vol[0];
        vector<int> suffixMax(k, 0);
        int crntMax = 0;
        for (int i = k-1; i >= 0; --i) {
            crntMax = max(crntMax, a[i]);
            suffixMax[i] = crntMax;
        }
        for (int i = 0; i < k; ++i) {
            int maxiH = (i+1 < k) ? suffixMax[i+1] : 0;
            int tj = (maxiH + p - 1) / p;
            int reqT = (a[i] + p - 1) / p;
            ans[i] = max(tj, reqT);
        }
    }

    for (int v = 0; v < (int)vol.size() - 1; ++v) {
        int j = vol[v];
        int k = vol[v+1];
        int start = j + 1;
        int end = k - 1;
        if (start > end) continue;
        int m = end - start + 1;
        vector<int> lMax(m, 0);
        vector<int> rMax(m, 0);
        int crntMax = 0;
        for (int idx = 0; idx < m; ++idx) {
            int pos = start + idx;
            lMax[idx] = crntMax;
            crntMax = max(crntMax, a[pos]);
        }
        crntMax = 0;
        for (int idx = m-1; idx >= 0; --idx) {
            int pos = start + idx;
            rMax[idx] = crntMax;
            crntMax = max(crntMax, a[pos]);
        }
        for (int idx = 0; idx < m; ++idx) {
            int pos = start + idx;
            int l_max = lMax[idx];
            int r_max = rMax[idx];
            int H = min(l_max, r_max);
            int tj = (H + p - 1) / p;
            int reqT = (a[pos] + p - 1) / p;
            ans[pos] = max(tj, reqT);
        }
    }

    int last_v = vol.back();
    if (last_v < n - 1) {
        int start = last_v + 1;
        int end = n - 1;
        int m = end - start + 1;
        if (m > 0) {
            vector<int> prefix_max(m, 0);
            int crntMax = 0;
            for (int idx = 0; idx < m; ++idx) {
                int pos = start + idx;
                crntMax = max(crntMax, a[pos]);
                prefix_max[idx] = crntMax;
            }
            for (int idx = 0; idx < m; ++idx) {
                int pos = start + idx;
                int maxiH = (idx > 0) ? prefix_max[idx-1] : 0;
                int tj = (maxiH + p - 1) / p;
                int reqT = (a[pos] + p - 1) / p;
                ans[pos] = max(tj, reqT);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << (i == n-1 ? "\n" : " ");
    }

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nULL), cout.tie(nULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}