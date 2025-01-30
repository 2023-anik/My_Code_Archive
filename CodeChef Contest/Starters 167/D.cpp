#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/*
░█▀▀░█▀█░█▀▀░░░█▀▀░█▀▄░█▀▄░█▀█░█▀▄░█
░█▀▀░█░█░█▀▀░░░█▀▀░█▀▄░█▀▄░█░█░█▀▄░▀
░▀▀▀░▀▀▀░▀░░░░░▀▀▀░▀░▀░▀░▀░▀▀▀░▀░▀░▀
*/

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &it:a){
        cin>>it;
    }
    int choose = a[0];
    sort(a.begin(), a.end());
    int ans;
    if(choose==a[n-1]){
        ans = 1e6-choose+1;
        ans+=choose-(choose+a[n-2]+1)/2; // (choose+a[n-2]+1)/2 is the next number after a[n-2]
        cout<<ans<<endl;
    }
    else if(a[0]==choose){
        ans = choose;
        ans+=(choose+a[1])/2 - choose; // (choose+a[1])/2 is the next number after a[1]
        cout<<ans<<endl;
    }
    else{
        int it = lower_bound(a.begin(), a.end(), choose) - a.begin();
        int low = (a[it-1]+a[it]+1)/2; // (a[it-1]+a[it]+1)/2 is the next number after a[it-1]
        int high = (a[it+1]+a[it])/2; // (a[it+1]+a[it])/2 is the next number after a[it]
        cout<<high-low+1<<endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}