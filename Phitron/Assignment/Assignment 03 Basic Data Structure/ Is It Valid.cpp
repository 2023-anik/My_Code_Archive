/*
https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/is-it-valid-1-1
*/

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        stack<char> s;
        for (char ch : str){
            if(!s.empty() && (ch=='0' && s.top()=='1'))
                s.pop();
            else if(!s.empty() && (ch=='1' && s.top()=='0'))
                s.pop();
            else s.push(ch);
        }
        cout<<(s.empty() ? "YES" : "NO")<<endl;
    }
    return 0;
}