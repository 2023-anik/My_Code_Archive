#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void insertMinHeap(vector<int>&v, int x){
    v.push_back(x);
    int curntIdx = v.size()-1;
    while(curntIdx != 0){
        int parentIdx = (curntIdx-1)/2;
        if(v[curntIdx] < v[parentIdx])
            swap(v[curntIdx], v[parentIdx]);
        else
            break;
        curntIdx = parentIdx;
    }
}

void deleteMinHeap(vector<int>&v){
    v[0] = v[v.size()-1];
    v.pop_back();
    int crntIdx = 0;
    while(1){
        int leftIdx = (crntIdx*2)+1;
        int rightIdx = (crntIdx*2)+2;
        int lastIdx = v.size()-1;

        if(leftIdx <= lastIdx && rightIdx <= lastIdx){
            //duitay ache
            if(v[leftIdx] <= v[rightIdx] && v[leftIdx] < v[crntIdx]){
                swap(v[leftIdx], v[crntIdx]);
                crntIdx = leftIdx;
            }
            else if(v[leftIdx] >= v[rightIdx] && v[rightIdx] < v[crntIdx]){
                swap(v[rightIdx], v[crntIdx]);
                crntIdx = rightIdx;
            }
            else
                break;
        }
        else if(leftIdx <= lastIdx){
            //left ache
            if(v[leftIdx] < v[crntIdx]){
                swap(v[leftIdx], v[crntIdx]);
                crntIdx = leftIdx;
            }
            else
                break;
        }
        else if(rightIdx <= lastIdx){
            //right ache
            if(v[rightIdx] < v[crntIdx]){
                swap(v[rightIdx], v[crntIdx]);
                crntIdx = rightIdx;
            }
            else
                break;
        }
        else
            break;
    }
}

void printMinHeap(vector<int>v){
    for(int x:v) cout<<x<<' ';
    cout<<endl;
}

int main(){
    int n; cin>>n;
    vector<int>v;
    while(n--){
        int x; cin>>x;
        insertMinHeap(v, x);
    }
    printMinHeap(v);
    deleteMinHeap(v);
    printMinHeap(v);
    deleteMinHeap(v);
    printMinHeap(v);
    return 0;
}