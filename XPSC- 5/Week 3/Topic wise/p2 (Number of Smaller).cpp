//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

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
    int n, m;
    cin >> n >> m;
    vi vec(n), vec2(m);
    for(auto &it:vec)
        cin >> it;
    for(auto &it:vec2)
        cin >> it;

    //O(n*n)=O(n^2)
    // int i, j, cnt;
    // for (i = 0; i < m; i++){
    //     cnt = 0;
    //     for (j = 0; j < n; j++){
    //         if(vec2[i]<= vec[j])
    //             break;
    //         cnt++;
    //     }
    //     cout << cnt << " ";
    // }

    // optimized solution in O(n)
    int l1 = 0, l2 = 0, cnt = 0;
    // vi ans;
    while(l2<m){
        if(l1<n && vec2[l2]>vec[l1]){
            cnt++;
            l1++;
        }else{
            l2++;
            // ans.push_back(cnt);
            cout << cnt << " ";
        }
    }
    // for(auto &it:ans)
    //     cout << it << " ";
    cout << endl;
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}