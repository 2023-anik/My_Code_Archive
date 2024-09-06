#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool cmp(pair<string, int>a, pair<string,int>b){
    if(a.first<b.first)
        return true;
    else if(a.first>b.first)
        return false;
    else
        if(a.second > b.second)
            return true;
        else
            return false;
}

int main(){
    int n; cin>>n;
    vector<pair<string,int>>v;
    while(n--){
        string s;
        int i;
        cin>>s>>i;
        v.push_back({s, i});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x:v)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}