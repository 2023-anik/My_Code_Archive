#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    vector<int>a={2, 4, 6, 6, 7, 8, 8, 8, 8, 12};
    auto it1 = lower_bound(a.begin(), a.end(), 6);//O(log(n)); only for sorted array
    auto it2 = upper_bound(a.begin(), a.end(), 6);//O(log(n)); only for sorted array
    // it2--;
    // cout<<it2-it1+1<<endl;
    cout<<it2-it1<<endl;//O(1)

    cout<<count(a.begin(), a.end(), 6)<<endl;//O(n); useable for both sorted and unsorted
}