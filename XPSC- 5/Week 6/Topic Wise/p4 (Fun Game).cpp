//https://codeforces.com/problemset/problem/1994/B

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    if(s[0]=='1'){
        yes;
        return;
    }
    // int index_of_1st_one_of_s = 0;
    // int index_of_1st_one_of_t = 0;
    // int i;
    // for (i = 0; i < s.length(); i++){
    //     index_of_1st_one_of_s++;
    //     if (s[i] =='1'){
    //         break;
    //     }
    // }
    // for (i = 0; i < t.length(); i++){
    //     index_of_1st_one_of_t++;
    //     if(t[i]=='1'){
    //         break;
    //     }
    // }
    int index_of_1st_one_of_s = s.find('1');// s.find_first_not_of('0');
    int index_of_1st_one_of_t = t.find('1');// t.find_first_not_of('0');
    if(index_of_1st_one_of_t<index_of_1st_one_of_s){
        no;
        return;
    }
    // int count_of_zero_of_s = count(s.begin(), s.end(), '0');
    auto find_1_in_s = find(s.begin(), s.end(), '1');
    auto find_1_in_t = find(t.begin(), t.end(), '1');
    if(find_1_in_s==s.end() && find_1_in_t!=t.end()){
        no;
        return;
    }
    yes;
}

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}