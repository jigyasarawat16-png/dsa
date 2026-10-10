class MinStack {
public:
    stack<pair<int, int>> s;

    MinStack() {
    }

    void push(int value) {
        if (s.empty()) {
            s.push({value, value});
        } 
        else {
            int minValue = min(value, s.top().second);
            s.push({value, minValue});
        }
    }

    void pop() {
        s.pop();
    }

    int top() {
        return s.top().first;
    }

    int getMin() {
        return s.top().second;
    }
};