#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, n, x, i, ans;
    cin>>t;
    while(t--){
        cin>>n;
        ans = 0;
        for(i=0; i<n; i++){
            cin>>x;
            ans^=x;
        }cout<<ans<<endl;
    }
}
