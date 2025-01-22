// https://leetcode.com/problems/add-binary/description/?envType=problem-list-v2&envId=math&

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

string addBinary(string &a, string &b){
    string ans;
    int i=a.length()-1,
        j=b.length()-1,
        carry=0;
    while(i>=0 || j>=0 || carry){
        if(i>=0){
            carry+=a[i]-'0';
            i--;
        }
        if(j>=0){
            carry+=b[j]-'0';
            j--;
        }
        ans += carry%2 + '0';//int to char type casting
        carry/=2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string a, b;
    cin>>a>>b;
    cout<<addBinary(a, b)<<endl;
}