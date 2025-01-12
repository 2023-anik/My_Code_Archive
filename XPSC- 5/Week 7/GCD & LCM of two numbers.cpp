#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    return __gcd(a, b);//O(min(a, b))
}

int LCM(int a, int b){
    return (a / GCD(a, b)) * b;
    //Formula: gcd(a, b) * lcm(a, b) = a * b
}

int main(){
    cout << GCD(16, 24) << endl;
    cout << LCM(16, 24) << endl;
    return 0;
}