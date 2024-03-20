#include <iostream>
#include <vector>

using namespace std;

class MyStack {
public:
    vector<int> v;

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        v.pop_back();
    }

    int top() {
        return v.back();
    }

    int size() {
        return v.size();
    }

    bool empty() {
        return v.empty();
    }
};

int main() {
    MyStack st1, st2;
    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st1.push(x);
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        int y;
        cin >> y;
        st2.push(y);
    }

    bool areEqual = true;
    if (n != m) {
        areEqual = false;
    } else {
        while (!st1.empty() && !st2.empty()) {
            int x = st1.top();
            st1.pop();
            int y = st2.top();
            st2.pop();

            if (x != y) {
                areEqual = false;
                break;
            }
        }
    }

    if (areEqual && st1.empty() && st2.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
