#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FOR(i, n) for (int i = 0; i < n; ++i)//0 to n-1
#define FOR1(i, n) for (int i = 1; i <= n; ++i)//1 to n
#define REP(i, a, b) for (int i = a; i <= b; ++i)//a to b inclusive
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve(){
    int n;
    cin>>n;
    // vector<char>vec;
    // FOR(i, n){
    //     char x;
    //     cin>>x;
    //     vec.push_back(x);
    // }
    // // int cnt = 0;
    // while(!vec.empty()){
    //     if(vec.front()=='W')
    //         vec.erase(vec.begin());
    //     else if(vec.back()=='W')
    //         vec.pop_back();
    //     else{
    //         cout<<vec.size()<<endl;
    //         return;
    //     }
    // }
    string s;
    cin>>s;
    while(!s.empty()){
        if(s.front()=='W')
            s.erase(s.begin());
        else if(s.back()=='W')
            s.pop_back();
        else {
            cout<<s.size()<<endl;
            return;
        }
    }
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}