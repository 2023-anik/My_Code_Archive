// https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771?leftPanelTabValue=PROBLEM

/*
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    stack<int>s;
    for(int i=1; i<=k; i++){
        s.push(q.front());
        q.pop();
    }
    queue<int>t;
    while(!s.empty()){
        t.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        t.push(q.front());
        q.pop();
    }return t;
}
*/