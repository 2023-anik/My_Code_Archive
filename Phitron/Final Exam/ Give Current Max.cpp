#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Student{
    public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp{
    public:
    bool operator()(Student a, Student b){
        if(a.marks < b.marks) return true;
        else if(a.marks > b.marks) return false;
        else
            return a.roll > b.roll;
    }
};


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin>>n;
    vector<Student>v;
    while(n--){
        string n;
        int r; 
        int m;
        cin>>n>>r>>m;
        Student obj(n, r, m);
        v.push_back(obj);
    }
    priority_queue<Student, vector<Student>, cmp>pq;
    for(auto x:v)
        pq.push(x);
    int q; cin>>q;
    while(q--){
        int c; cin>>c;
        if(c==0){
            string n;
            int r; 
            int m;
            cin>>n>>r>>m;
            Student obj(n, r, m);
            pq.push(obj);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(c==1)
            if(!pq.empty()) cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else cout<<"Empty"<<endl;
        else if(c==2){
            if(!pq.empty()) pq.pop();
            if(!pq.empty()) cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else cout<<"Empty"<<endl;
        }
    }
    return 0;
}