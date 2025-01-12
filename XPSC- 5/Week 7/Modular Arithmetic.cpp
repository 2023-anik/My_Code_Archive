#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    int a = 1e9, b = 1e9, c = 1e9;
    cout << ((a % MOD) * (b % MOD) * (c % MOD)) % MOD << endl;//overflow problem
    cout << ((((a % MOD) * (b % MOD)) % MOD) * (c % MOD)) % MOD << endl;//correct ans
    return;
}