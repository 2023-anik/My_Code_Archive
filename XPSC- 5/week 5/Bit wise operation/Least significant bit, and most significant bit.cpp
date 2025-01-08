#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int msbPosi = log2(n);
    int lsbPosi = 0;
    n ^= (1<<msbPosi);
    n ^= (1<<lsbPosi);
    cout<<n<<endl;
}
