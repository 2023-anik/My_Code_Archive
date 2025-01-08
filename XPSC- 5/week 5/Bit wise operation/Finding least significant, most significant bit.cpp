#include <bits/stdc++.h>
// #include <bit>
using namespace std;
int msbit(int num) {
    // int pos = -1;
    // while (num) {
    //     num >>= 1;
    //     pos++;
    // }
    // return pos;
    return log2(num);
}
int main() {
	// your code goes here
	int n;
	cin>>n;
// 	cout<<msbit(n)<<" "<<(n&1)<<endl;
    int a = __bit_width(n)-1;
    cout<<a<<" "<<(n&1)<<endl;
}
