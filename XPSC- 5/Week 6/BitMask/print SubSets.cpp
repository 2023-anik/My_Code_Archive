#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    int i, mask;
    for (mask = 0; mask < (1 << 5); mask++){
        // cout << mask << "->" << (1 << 5) << endl;
        for (i = 0; i < 5; i++){
            if((mask>>i)&1){//check the bit on or not
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}