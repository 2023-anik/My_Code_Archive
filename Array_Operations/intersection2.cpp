#include <bits/stdc++.h> 
using namespace std;

void intersection(int arr1[], int arr2[], int size1, int size2){
    int i=0;
    int j=0;
    int count=0;
    vector<int>vi;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else{
            vi.push_back(arr1[i]);
            i++;
            j++;
            count++;
        }
    }
    if(!count)
            cout<<"-1\n";
        else{
            for(int i:vi)
            cout<<i<<' ';
        }
}

int main() 
{ 
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; ++i)
        cin>>arr1[i];
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0; i<m; ++i)
        cin>>arr2[i];
    intersection(arr1, arr2, n, m);
    return 0; 
} 