#include <bits/stdc++.h>
using namespace std;

string binaryStr(int n){
    // bitset<32>bits(n);
    // string bstr=bits.to_string();
    // return bstr.erase(0, bstr.find_first_not_of('0'));
    string bstr="";
    for(int k=31; k>=0; k--){
        bstr += ((n >> k) & 1) ? '1' : '0';
    }
    return bstr.erase(0, bstr.find_first_not_of('0'));
}

int main() {
	// your code goes here
    int n;
    cin>>n;
    cout<<binaryStr(n)<<endl;
}
