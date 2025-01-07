#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_binary(int num){
    for(int i=8; i>0; --i){
        cout<<((num>>i)&1);//right shifting
    }
    cout<<endl;
}

int main(){
    // int a=5, b=7;
    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(a^b)<<endl;
    // print_binary((a&b));
    // print_binary((a|b));
    // print_binary((a^b));

    //XOR operation
    // cout << (1 ^ 1) << endl;
    // cout << (0 ^ 0) << endl;
    // cout << (1 ^ 0) << endl;
    // cout << (0 ^ 1) << endl;

    // NOT operation
    // Formula: ~x = (-x-1)
    //  cout << ~1 << endl;
    //  cout << ~2 << endl;
    // for (int i = 0; i <= 5; i++)
    //     cout << ~i << endl;

    //Left shifting of 1 till 31 times
    // for (int i = 0; i < 32; i++)
    //     cout << (1 << i) << endl;//2^n
    // cout << (1 << 4) << endl;//16=2^4
    // cout << (14 << 2) << endl;//56

    //Application of left shifting
    for (int i = 31; i >= 0; i--)
        cout << (1 << i) << endl;

        // Right Shifting
        //  cout << (49 >> 3) << endl;//6

        return 0;
}
