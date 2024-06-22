#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int size=str.size();
    for(int i=0; i<=size/2; i++){
        if(str[i]!=str[size-1]){
            cout<<"No\n";
            return 0;
        }
        size--;
    }
    cout<<"Yes palendrome!"<<endl;
    return 0;
}