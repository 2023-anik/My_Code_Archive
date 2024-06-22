#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    vector<int>vec={1, 3, 2, 4, 5};
    int cnt=0;
    for(int l=0; l<5; ++l)
        for(int r=l; r<5; ++r){
            for(int i=l; i<=r; ++i){
                cout<<vec[i]<<' ';
            }cnt++;
            cout<<endl;
        }
        cout<<"total number of subarray: "<<cnt<<endl;
        cout<<"total number of subarray: "<<5*(5+1)/2<<endl;
    return 0;
}
/*A subarray is a contiguous part of an array. This means it is a sequence of elements
that comes one after another without any gaps.
Example: Some subarrays of the array=[1, 3, 2, 4, 5]
* [1] (just the first element)
* [3, 2] (the second and third elements)
* [1, 3, 2, 4] (the first four elements)
* [2, 4, 5] (the last three elements)
* [1, 3, 2, 4, 5] (the entire array itself is also considered a subarray)

Calculate possible number of subarrays of an array which has n elements:
array[1, 3, 4, 2, 5, 6..............n]
   0  1  2  3  4  5  6  7...........N(index)
for array[0]=empty, there have n elements
for array[1]=1, there have (n-1) elements
for array[2]=3, there have (n-2) elements
for array[3]=4, there have (n-3) elements
..........
..........
..........
for array[N]=n,there have 1 elements
n+(n-1)+(n-2)+........+3+2+1
here, we can use the sum of all natural numbers from 1 to (n): n*(n+1)/2
So, the Number of subarrays = n*(n+1)/2
*/