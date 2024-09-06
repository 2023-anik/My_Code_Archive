#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; 
    cin >> t;
    cin.ignore();
    
    while (t--) {
        string s;
        getline(cin, s);
        string wd;
        stringstream ss(s);
        map<string, int> mp;
        int maxCnt = 0;
        string maxStr;
        
        while (ss >> wd) {
            mp[wd]++;
            if (mp[wd] > maxCnt) {
                maxCnt = mp[wd];
                maxStr = wd;
            }
        }
        cout << maxStr << " " << maxCnt << endl;
    }
    return 0;
}
