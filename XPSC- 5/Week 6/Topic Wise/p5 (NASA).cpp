// https://www.codechef.com/problems/PALIXOR

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
typedef vector<int> vi;
typedef pair<int, int> pii;
const int MaxN = (1LL << 15);
vi allPalindromes;

bool isPalindrome(int x){
    string s = to_string(x);
    string y = s;
    reverse(y.begin(), y.end());
    return s == y;
}

void find_All_Palindrome_from_0_to_MaxN(){
    int i;
    for (i = 0; i < MaxN; i++){
        if(isPalindrome(i)){
            allPalindromes.push_back(i);
        }
    }
}

void solve(){
    int n;
    cin >> n;
    vi arr(n), cnt(MaxN);
    for(auto &it:arr){
        cin >> it;
        cnt[it]++;
    }
    // find_All_Palindrome_from_0_to_MaxN();
    // Brute Force Approach
    //  int ans = 0;
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = i; j < n; j++){
    //          // binary_8_bit_representation((arr[i]^arr[j]));
    //          // cout << endl;
    //          if(isPalindrome((arr[i]^arr[j]))){
    //              ans++;
    //          }
    //      }
    //  }
    //  cout << ans << endl;

    //Properties of XOR
    // a ^ b = c
    // a ^ c = b
    // b ^ c = a
    int i, j, crnt, ans = n;
    for (i = 0; i < n; i++){
        for (j = 0; j < allPalindromes.size(); j++){
            crnt = (arr[i] ^ allPalindromes[j]);
            ans += cnt[crnt];
        }
    }
    cout << ans/2 << endl;
}

int32_t main(){
    FAST
    find_All_Palindrome_from_0_to_MaxN();
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}