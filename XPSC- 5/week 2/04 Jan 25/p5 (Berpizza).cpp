//https://codeforces.com/problemset/problem/1468/C

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
    int q;
    cin >> q;
    int type, taka;
    set<pii> firstCame;
    multiset<pii> largestTaka;
    int i = 1;
    while (q--){
        cin >> type;
        if (type == 1){
            cin >> taka;
            firstCame.insert({i, taka});
            largestTaka.insert({taka, -i});
            i++;
        }
        else if(type==2){
            cout << firstCame.begin()->first << " ";
            largestTaka.erase(largestTaka.find({firstCame.begin()->second, (firstCame.begin()->first)*(-1)}));
            firstCame.erase(firstCame.begin());
        }
        else{
            cout << (largestTaka.rbegin()->second)*(-1) << " ";
            firstCame.erase(firstCame.find({(largestTaka.rbegin()->second)*(-1), largestTaka.rbegin()->first}));
            // largestTaka.erase(largestTaka.rbegin()); **wrong** cause can't derectly erase for reverse iterator
            // largestTaka.erase(prev(largestTaka.end()));
            largestTaka.erase(--largestTaka.end());//shortcut
        }
    }
    // cout << endl;
    // for (auto &[x, y] : firstCame)
    //     cout << "[" << x << ", " << y << "]" << " ";
    // cout << endl;
    // for (auto &[x, y] : largestTaka)
    //     cout << "[" << x << ", " << y << "]" << " ";
}

int32_t main(){
    FAST
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}

// [1, 8] [2, 10] [3, 6] [4, 9] 
// [6, 3] [8, 1] [9, 4] [10, 2]