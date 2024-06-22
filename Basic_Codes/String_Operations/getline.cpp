#include<iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    cin.ignore();//for ignoring the space or newline of "cin" for "getline"
    while(i--){
        string s;
        getline(cin, s);
        cout<<s<<endl;
    }return 0;
}