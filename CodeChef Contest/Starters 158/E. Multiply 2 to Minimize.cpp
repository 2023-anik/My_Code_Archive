#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
typedef vector<int> vi;

void solve(){
    int n;
    cin >> n;
    vi ar(n);
    for(auto &it:ar){
        cin >> it;
    }
    map<int, int> mp;

    int i, j, value, total;
    for (i = 0; i < n; i++){
        // when i = 2;
        // mp[4]=1
        // mp[2]=1
        //size of mp = 2
        value = ar[i];//2
        mp[value]++;//mp[2] -> 2
        while(mp[value]>=2){//mp[8]=1<2(break)
            total = mp[value];//2, 2
            mp.erase(value);//mp[2]=0, mp[4]=0
            if (total % 2 == 1){
                mp[2 * value]++;
            }
            total /= 2;
            for (j = 1; j <= total; j++){
                mp[2 * value]++;//mp[4]=1+1=2, mp[8]=1
            }
            value *= 2;//4, 8
        }
        cout << mp.size() << " ";//print->1
    }
    cout << endl;
}
//[4 2 2 1 3 1]
//[4] -> 1
//[4 2] -> 2
//[4 2 2] => [4 4] => [8] -> 1
//[4 2 2 1] => [4 1 4] => [1 8] -> 2
//[4 2 2 1 3 1] => [4 1 3 1 4] => [1 3 1 8] => [3 8 2] -> 3
//[4 2 2 1 3 1 1] => [4 1 3 1 1 4] => [1 3 1 1 8] => [3 1 8 2] -> 4

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}