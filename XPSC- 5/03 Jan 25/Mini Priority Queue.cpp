#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    //initialization of a priority queue
    priority_queue<int, vector<int>, greater<int>> pq;//min priority queue
    //greater<int>: This is a comparison function
    // Adding greater<int> changes it to a "min-heap," where the smallest element is at the top.

    while(1){
        int c;
        cin >> c;//command, c=0(push), c=1(pop), c=2(top)

        if(c==0){
            int x;
            cin >> x;
            //input to priority queue
            pq.push(x);//O(logN)
        }

        else if(c==1)
            pq.pop();//O(logN)-> pop the top element

        else if(c==2)
            cout << pq.top() << endl;//O(1)-> get the top element
            
        else break;
    }
    //size function
    cout<<"Size -> "<<pq.size()<<endl;

    //empty function: returns true if the priority queue is empty
    cout<<"Empty -> "<<pq.empty()<<endl;

    //display elements
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}