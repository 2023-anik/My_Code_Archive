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
    int n, x, k;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    int one=0, inv=0;
    for(auto &it:s){
        if(it=='1'){
            one++;
        }else{
            inv+=one;
        }
    }
    //ans will be 1 or 2 for the given string
    if(inv<=x && inv%k==0){// if we select whole string then if it is divisible by k then the answer is 1
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
        //when we select all 1s and their inversions similarly for 0s then ans will be 2 
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