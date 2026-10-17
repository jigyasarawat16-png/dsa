#include <stack>
using namespace std;

class MyQueue {
    stack<int> s;

public:
    MyQueue() {
    }

    void push(int x) {
        s.push(x);
    }

    int pop() {
        if (s.size() == 1) {
            int x = s.top();
            s.pop();
            return x;
        }

        int x = s.top();
        s.pop();

        int ans = pop();

        s.push(x);

        return ans;
    }

    int peek() {
        if (s.size() == 1) {
            return s.top();
        }

        int x = s.top();
        s.pop();

        int ans = peek();

        s.push(x);

        return ans;
    }

    bool empty() {
        return s.empty();
    }
};