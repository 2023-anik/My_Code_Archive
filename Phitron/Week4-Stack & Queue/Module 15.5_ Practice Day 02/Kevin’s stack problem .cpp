// https://www.naukri.com/code360/problems/kevin-s-stack-problem_1169465?leftPanelTabValue=PROBLEM

/*
string kevinStackProblem(string &s)
{
	// Write your code here.
	stack<char>st;
	for(char c:s)
		st.push(c);
	s="";
	while(!st.empty()){
		s+=st.top();
		st.pop();
	}
	return s;
}
*/