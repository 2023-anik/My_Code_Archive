#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    fast;
    // initialization of set
    set<int> s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    //display elementsd
    for(int x:s)
        cout << x << " ";
    cout << endl;

    //access the smallest element of the set using iterator
    // set<int>::iterator it = s.begin();
    //short cut
    auto it = s.begin();
    cout << *it << endl;

    //access the biggest element of the set using iterator
    it = s.end();
    it--;
    cout << *it << endl;

    //find an element
    it = s.find(7);
    if(it!=s.end())
        cout << *it << " found" << endl;
    else
        cout << "not found" << endl;
    
    //erase an element
    s.erase(5);
    //after erasing 5
    for(int x:s)
        cout << x << " ";
    cout << endl;

    //size function
    cout <<"size before clearing: " << s.size() << endl;

    //clear the set
    s.clear();
    cout << "size after clearing: " << s.size() << endl;

    return 0;
}