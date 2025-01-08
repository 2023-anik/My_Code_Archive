#include<bits/stdc++.h>
using namespace std;
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Function prototypes
bool isEven(int num);
int setBit(int num, int pos);
int unsetBit(int num, int pos);
int toggleBit(int num, int pos);
bool isBitSet(int num, int pos);
int countSetBits(int num);
bool isPowerOfTwo(int num);
int msbPosition(int num);
unsigned int reverseBits(unsigned int num);
int lowestSetBit(int num);
void swap(int &a, int &b);
void printBinary(int num);
int clearBitsUpto(int num, int pos);
int clearBitsFrom(int num, int pos);
int xorFrom1ToN(int n);
bool haveOppositeSigns(int x, int y);
int turnOffRightmostSetBit(int num);
int positionOfSetBit(int num);
int mergeNumbers(int n, int m, int i, int j);
int leadingZeros(int num);

void solve(){
    int a = 11;
    // cout << a << endl;
    //binary representation of a
    //[1]
    // for (int k = 31; k >= 0; k--)
    //     if(isBitSet(a, k))//(a & (1 << k))!=0 or ((a >> k) & 1)!=0 return true
    //         cout << 1;
    //     else
    //         cout << 0;
    // cout << endl;
    //[2]
    // printBinary(a);
    //[3]
    // for(int k=31; k>=0; k--)
    //     cout << ((a>>k)&1);

    //Turn on a bit means set a bit
    // a = (a | (1 << 6));
    // a = setBit(a, 6);
    // printBinary(a);
    //using builtin function
    bitset<32> bits(11);
    cout << bits << endl;//print as binary representation of 11
    bits.set(6);
    cout << bits << endl;//print the binary representation

    //Turn of a bit means unset a bit
    // a = a & ~(1 << 3);
    // a &= ~(1 << 3);
    // a = unsetBit(a, 3);
    // printBinary(a);
    // using builtin function
    bits.reset(3);
    cout << bits << endl;

    //Toggle or Flip a bit at any position
    // a = a ^ (1 << 0);
    // a ^= (1 << 0);
    // a = toggleBit(a, 0);
    // printBinary(a);
    //Builtin Function
    bits.flip(0);//flip the bit at 0th position
    cout << bits << endl;
    bits.flip();//flip all bit
    cout << bits << endl;
    cout << "MSB position: " << __bit_width(a)-1 << endl;
}

int32_t main(){
    FAST int t = 1;
    // cin >> t;
    while(t--)
        solve();
    return 0;
}

// Function definitions
bool isEven(int num) { return (num & 1) == 0; }
int setBit(int num, int pos) { return num | (1 << pos); }
int unsetBit(int num, int pos) { return num & ~(1 << pos); }
int toggleBit(int num, int pos) { return num ^ (1 << pos); }
bool isBitSet(int num, int pos) { return (num & (1 << pos)) != 0; }
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
bool isPowerOfTwo(int num) { return num > 0 && (num & (num - 1)) == 0; }
int msbPosition(int num) {
    // int pos = -1;
    // while (num) {
    //     num >>= 1;
    //     pos++;
    // }
    // return pos;
    return log2(num);
}
unsigned int reverseBits(unsigned int num) {
    unsigned int result = 0;
    for (int i = 0; i < 32; i++) {
        result <<= 1;
        result |= (num & 1);
        num >>= 1;
    }
    return result;
}
int lowestSetBit(int num) { return num & -num; }
void swap(int &a, int &b) { a ^= b; b ^= a; a ^= b; }
void printBinary(int num) {
    for (int i = 31; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
int clearBitsUpto(int num, int pos) { return num & (~((1 << (pos + 1)) - 1)); }
int clearBitsFrom(int num, int pos) { return num & ((1 << pos) - 1); }
int xorFrom1ToN(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}
bool haveOppositeSigns(int x, int y) { return (x ^ y) < 0; }
int turnOffRightmostSetBit(int num) { return num & (num - 1); }
int positionOfSetBit(int num) {
    if (num <= 0 || (num & (num - 1)) != 0) return -1; // Not a power of 2
    int pos = 0;
    while (num > 1) {
        num >>= 1;
        pos++;
    }
    return pos;
}
int mergeNumbers(int n, int m, int i, int j) {
    int mask = (~0 << (j + 1)) | ((1 << i) - 1);
    n &= mask; m <<= i;
    return n | m;
}
int leadingZeros(int num) {
    if (num == 0) return 32;
    int count = 0;
    while ((num & (1 << 31)) == 0) {
        num <<= 1;
        count++;
    }
    return count;
}