#include<bits/stdc++.h>
using namespace std;

//using Euclid's Algorithm
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<"gcd: "<<gcd(a, b)<<endl;
    cout<<"gcd: "<<__gcd(a, b)<<endl;//using builtin function
    cout<<"lcm: "<<(a*b)/__gcd(a, b)<<endl;
}

//gcd(a, b) * lcm(a, b) = a*b