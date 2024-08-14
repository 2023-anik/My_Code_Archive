// https://www.naukri.com/code360/problems/min-stack_3843991?leftPanelTabValue=PROBLEM

/*
class minStack
{
public:
    std::vector<int> v;          // Main stack to store all elements
    std::vector<int> minStack;   // Auxiliary stack to store minimum elements

    // Function to add another element equal to num at the top of the stack.
    void push(int num)
    {
        v.push_back(num);
        // If minStack is empty or num is smaller than or equal to the current minimum, push it onto minStack.
        if (minStack.empty() || num <= minStack.back()) {
            minStack.push_back(num);
        }
    }

    // Function to remove the top element of the stack.
    int pop()
    {
        if (v.empty()) return -1;
        int top = v.back();
        v.pop_back();
        // If the popped element is the current minimum, pop it from minStack as well.
        if (!minStack.empty() && top == minStack.back()) {
            minStack.pop_back();
        }
        return top;
    }

    // Function to return the top element of the stack if it is present. Otherwise, return -1.
    int top()
    {
        if (v.empty()) return -1;
        return v.back();
    }

    // Function to return the minimum element of the stack if it is present. Otherwise, return -1.
    int getMin()
    {
        if (minStack.empty()) return -1;
        return minStack.back(); // The top of minStack holds the current minimum
    }
};
*/