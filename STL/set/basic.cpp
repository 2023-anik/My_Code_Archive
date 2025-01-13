#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(2);
    s.insert(5);
    s.insert(1);
    cout << s.insert(0).second << endl;//1, if inserted then 1 else 0
    cout << s.insert(2).second << endl;//0, if inserted then 1 else 0
    if(!s.insert(2).second){
        cout << "Already present" << endl;
    }
    cout << s.size() << endl;//4 -> 0 1 2 5
    if(s.insert(3).second){
        cout << "Inserted" << endl;
    }
}
