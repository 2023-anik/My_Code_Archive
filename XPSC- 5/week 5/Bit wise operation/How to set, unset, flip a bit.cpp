#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    n = n | (1<<0);
    // cout<<n<<endl;
    n = n & ~(1<<1);
    // cout<<n<<endl;
    n = n ^ (1<<2);
    cout<<n<<endl;
}
