#include<bits/stdc++.h>
using namespace std;
#define int long long

bool isPalindrome(string s){
    string t=s;
    reverse(t.begin(), t.end());
    return s==t;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    // cout<<s.substr(0, n-1)<<endl;
    // cout<<s.substr(1, n-1)<<endl;
    if(isPalindrome(s)){
        cout<<0<<endl;
        return;
    }
    if(n==2 && s[0]!=s[1]){
        cout<<-1<<endl;
        return;
    }
    if(s[0]!=s[n-1]){
        if(isPalindrome(s.substr(0, n-1)) && isPalindrome(s.substr(1, n-1))){
            cout<<-1<<endl;
        }else{
            cout<<1<<endl;
        }
        return;
    }
    int l=0, r=n-1;
    while(r<n){
        if(s[l]!=s[r]){
            cout<<1<<endl;
            return;
        }
        l++, r--;
    }
    cout<<0<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}