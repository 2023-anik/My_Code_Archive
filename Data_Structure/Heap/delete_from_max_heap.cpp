#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void insert_max_heap(vector<int>&v, int x){
    v.push_back(x);
    int curnt=v.size()-1;
    while(curnt != 0){
        int parntIdx = (curnt-1)/2;
        if(v[curnt] > v[parntIdx])
            swap(v[curnt], v[parntIdx]);
        else
            break;
        curnt = parntIdx;
    }
}

void deleteMaxHeap(vector<int>&v){
    v[0]=v[v.size()-1];
    v.pop_back();
    int crnt=0;
    while(1){
        int leftIdx = (crnt*2)+1;
        int rightIdx = (crnt*2)+2;
        int lastIdx = v.size()-1;

        if(leftIdx <= lastIdx && rightIdx <= lastIdx){
            //duitay ache
            if(v[leftIdx] >= v[rightIdx] && v[leftIdx] > v[crnt]){
                swap(v[leftIdx], v[crnt]);
                crnt = leftIdx;
            }
            else if(v[rightIdx] >= v[leftIdx] && v[rightIdx] > v[crnt]){
                swap(v[rightIdx], v[crnt]);
                crnt = rightIdx;
            }
            else
                break;
        }
        else if(leftIdx <= lastIdx){
            //left a ache
            if(v[leftIdx] > v[crnt]){
                swap(v[leftIdx], v[crnt]);
                crnt = leftIdx;
            }
            else
                break;
        }
        else if(rightIdx <= lastIdx){
            //right a ache
            if(v[rightIdx] > v[crnt]){
                swap(v[rightIdx], v[crnt]);
                crnt = rightIdx;
            }
            else
                break;
        }
        else
            break;
    }
}

void printHeap(vector<int>v){
    for(int x:v) cout<<x<<' ';
    cout<<endl;
}

int main(){
    int n; cin>>n;
    vector<int>v;
    while(n--){
        int x; cin>>x;
        insert_max_heap(v, x);
    }
    printHeap(v);
    deleteMaxHeap(v);
    printHeap(v);
    deleteMaxHeap(v);
    printHeap(v);
    return 0;
}
