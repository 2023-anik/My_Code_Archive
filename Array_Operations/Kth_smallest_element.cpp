#include<iostream>
#include<algorithm>//for sort function
using namespace std;
int main(){
    int N;
    cin>>N;
    int org_arr[N];
    int i=0;
    while(i<N){
        cin>>org_arr[i];
        i++;
    }
    sort(org_arr, org_arr+N);
    int K, L, R;
    cin>>K>>L>>R;
    cout<<org_arr[K-1]<<endl;
    return 0;
}