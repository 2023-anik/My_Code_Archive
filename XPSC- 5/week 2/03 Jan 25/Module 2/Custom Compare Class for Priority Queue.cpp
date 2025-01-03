#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

//custom class
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

//comparison function
class cmp {
public:
    bool operator()(Student a, Student b) {
        // If marks are the same, sort by roll in ascending order (higher priority for smaller roll)
        if (a.marks == b.marks)
            return a.roll < b.roll;
        // Higher marks should have higher priority
        return a.marks < b.marks;
    }
};


int main(){
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;

    //input students data and push them into the priority queue
    for(int i=0; i<n; i++){
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }

    //display students data
    while(!pq.empty()){
        Student s = pq.top();
        cout << s.name << " " << s.roll << " " << s.marks << endl;
        pq.pop();
    }

    return 0;
}