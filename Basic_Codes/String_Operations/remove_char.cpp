#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    // Remove characters of s1 that are present in s2
    for (char c : s2) {
        s1.erase(remove(s1.begin(), s1.end(), c), s1.end());
    }
    cout << s1 << endl;
    return 0;
}
