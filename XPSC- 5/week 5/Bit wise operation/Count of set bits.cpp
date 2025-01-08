#include <bits/stdc++.h>
using namespace std;
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
int main() {
	// your code goes here
    int n;
    cin>>n;
    // cout<<__builtin_popcount(n)<<endl;
    cout<<countSetBits(n)<<endl;
}
