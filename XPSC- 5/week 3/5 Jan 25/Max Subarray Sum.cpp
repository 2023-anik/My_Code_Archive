#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    for(auto &it:ar)
        cin >> it;
    
    //***Algo(1):straightforward O(n^3)***
    // int i, j, k, maxSum = 0, sum;
    // for (i = 0; i < n; i++)
    //     for (j = i; j < n; j++){
    //         sum = 0;
    //         for(k=i; k<=j; k++)
    //             sum += ar[k];
    //         maxSum = max(maxSum, sum);
    //     }
    // cout << maxSum << endl;


    //***Algo(2): removing 1 loop O(n^2)
    // int i, j, maxSum = 0, sum;
    // for (i = 0; i < n; i++){
    //     sum = 0;
    //     for (j = i; j<n; j++){
    //         sum += ar[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }
    // cout << maxSum << endl;


    //***Algo(3): removing 2 loop (more efficient O(n))
    int i, maxSum = 0, sum = 0;
    for(i=0; i<n; i++){
        sum = max(ar[i], sum + ar[i]);
        maxSum = max(maxSum, sum);
    }
    cout << maxSum << endl;
    
    return 0;
}