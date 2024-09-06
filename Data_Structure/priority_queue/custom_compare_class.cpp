#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Student{
    public:
    string name;
    int id;
    int marks;
    Student(string name, int id, int marks){
        this->name = name;
        this->id = id;
        this->marks = marks;
    }
};

class cmp{
    public:
        bool operator()(Student a, Student b){
            if(a.marks > b.marks) return true;
            else if(a.marks < b.marks) return false;
            else 
                if(a.id > b.id) 
                    return true;
                else
                    return false;
        }
};

int main(){
    int n; cin>>n;
    priority_queue<Student, vector<Student>, cmp>pq;
    while(n--){
        string name;
        int id;
        int marks;
        cin>>name>>id>>marks;
        Student obj(name, id, marks);
        pq.push(obj);
    }
    //to show the queue's elements
    while(!pq.empty()){
        cout<<pq.top().name<<" "<<pq.top().id<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}