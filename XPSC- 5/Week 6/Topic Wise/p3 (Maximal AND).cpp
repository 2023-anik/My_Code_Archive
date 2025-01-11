//https://codeforces.com/problemset/problem/1669/H

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
const int B = 30;

map<int, int> initializeBits(int size, int value){
    int i;
    map<int, int> bits;
    for (i = 0; i < size; i++)
        bits[i] = 0;
    return bits;
}

void solve(){
    int n, k;
    cin >> n >> k;
    vi arr(n);
    for(auto &it:arr){
        cin >> it;
    }
    int i, j;
    vi bits(B + 1);
    // map<int, int> bits = initializeBits(31, 0);
    for (i = 0; i < n; i++)
    {
        // cout << arr[i] << " -> ";
        for (j = B; j >= 0; j--)
        {
            if((arr[i]>>j)&1){
                // cout << 1 << " ";
                bits[j]++;
            }
            // else
            //     cout << 0 << " ";
        }
        // cout << endl;
    }
    // for(auto &[x, y]:bits)
    //     cout << x << " -> " << y << endl;
    int needs, ans=0;
    // cout << ans << endl;
    for (i = B; i >= 0; i--){
        if(bits[i]==n){
            ans += (1LL << i);
        }else{
            needs = n - bits[i];
            if(k>=needs){
                ans += (1LL << i);
                k -= needs;
            }
        }
    }
    cout << ans << endl;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}