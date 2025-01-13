#include<bits/stdc++.h>
using namespace std;

void update(set<int> &s, int x){
    if(!s.insert(x).second){
        // cout << x << " Already present" << endl;
        s.erase(x);
        update(s, 2 * x);
    }
    // cout<<x<<" is inserted"<<endl;
}

int main(){
    int n;
    cin >> n;
    int x;
    set<int> s;
    int i;
    for (i = 0; i < n; i++){
        cin >> x;
        update(s, x);
        cout << s.size() << " -> ";
        for (auto &it : s){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}