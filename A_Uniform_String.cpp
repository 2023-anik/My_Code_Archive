#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve(){
    int n, k;
    cin>>n>>k;
    string s;
    char ch='a';
    int i, cnt=0;
    for(i=0; i<n; i++){
        if(cnt==k){
            ch='a';
            cnt=0;
        }
        s+=ch;
        ch++;
        cnt++;
    }
    cout<<s<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}