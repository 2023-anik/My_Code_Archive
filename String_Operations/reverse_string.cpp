#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    string str_rev;
    for(int i=str.size()-1; i>=0; i--){
        str_rev=str_rev+str[i];
    }
    cout<<str_rev;
    return 0;
}

//Don't do it for two reason
//1. In string don't put char
//2. Time complexity more