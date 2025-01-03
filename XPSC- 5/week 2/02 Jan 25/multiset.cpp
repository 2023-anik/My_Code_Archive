#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    fast;
    // initialization of set**
    multiset<int> mls;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        mls.insert(x);
    }

    //display elements**
    for(int x:mls)
        cout << x << " ";
    cout << endl;

    //count occurrences of an element**
    cout << mls.count(2) << endl;

    //erase all occurrences of an element**
    // mls.erase(2);
    //after erasing 2
    // for(int x:mls)
    //     cout << x << " ";
    // cout << endl;

    //erase only one occurrence of an element**
    mls.erase(mls.find(2));
    //after erasing first occurrences of 2
    for(int x:mls)
        cout << x << " ";
    cout << endl;

    //access the smallest element of the set using iterator**
    // set<int>::iterator it = s.begin();**
    //short cut**
    auto it = mls.begin();
    cout << *it << endl;

    //access the biggest element of the set using iterator**
    it = mls.end();
    it--;
    cout << *it << endl;

    //find an element**
    it = mls.find(7);
    if(it!=mls.end())
        cout << *it << " found" << endl;
    else
        cout << "not found" << endl;
    
    //erase an element**
    mls.erase(5);
    //after erasing 5
    for(int x:mls)
        cout << x << " ";
    cout << endl;

    //size function**
    cout <<"size before clearing: " << mls.size() << endl;

    //clear the set**
    mls.clear();
    cout << "size after clearing: " << mls.size() << endl;

    return 0;
}