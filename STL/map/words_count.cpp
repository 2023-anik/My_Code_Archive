#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string, int>mp;
    while(ss>>word)
        mp[word]++;
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}