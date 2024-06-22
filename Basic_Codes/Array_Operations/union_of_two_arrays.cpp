#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int matching_count=0;
    for(int i=0; i<m; i++){
        cin>>b[i];
        for(int j=0; j<m; j++){
            if(b[i]==a[j]){
                matching_count++;
                break;
            }
        }
    }
    cout<<(n+m)-matching_count<<endl;
}