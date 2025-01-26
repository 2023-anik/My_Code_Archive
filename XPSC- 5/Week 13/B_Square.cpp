#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

void solve(){
    int a, b;
    cin>>a>>b;
    if(a<=b)swap(a,b);
    int x, y;
    cin>>x>>y;
    if(x<=y)swap(x,y);
    if(x==a){
        (a*b)+(x*y)==pow(a,2)?yes:no;
    }else{
        no;
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