#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    // vector<int>v={10, 20, 30, 40, 50};
    int n; cin>>n;//how many elements u want to store
    vector<int>v;
    while(n--){
        int x; cin>>x;
        v.push_back(x);
        int current_idx=v.size()-1;
        while(current_idx!=0){
            int parent_idx=(current_idx-1)/2;
            //to move to the parent index: parent_idx=(current_idx-1)/2
            //to move to the parent to the left child node: left_child_node=(parent_index*2)+1
            //to move to the parent to the right child node: right_child_node=(parent_index*2)+2
            if(v[current_idx]>v[parent_idx])//for max heap
                swap(v[current_idx], v[parent_idx]);
            else
                break;
            current_idx=parent_idx;
        }
    }
    
    for(int x:v) cout<<x<<" ";
    return 0;
}