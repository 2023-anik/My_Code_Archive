/*
Find the smallest key ≥ `x` in a map and
the smallest number ≥ `y` in the corresponding vector.
Print both if they exist.
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    map<int, vector<int>> mp;

    vector<int> v1={2,5};
    vector<int> v2 = {4, 5, 9};
    vector<int> v3 = {1, 6, 8, 12};

    mp[5]=v1;
    mp[7]=v2;
    mp[10]=v3;

    //display elements of map
    for(auto [x, y]:mp){
        cout<<x<<"->";
        for(int v:y)
            cout<<v<<" ";
        cout<<endl;
    }

    int x = 6, y = 8;

    auto it = mp.lower_bound(x);

    if(it!=mp.end()){
        int ans = it->first;
        cout << ans << endl;
        
        auto it2 = lower_bound(mp[ans].begin(), mp[ans].end(), y);

        if (it2 != mp[ans].end())
            cout<<*it2<<endl;
        else cout<<"Not found"<<endl;
    }else cout<<"Not found"<<endl;

    return 0;
}