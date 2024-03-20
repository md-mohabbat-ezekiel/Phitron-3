#include <iostream>
#include <stack>
#include <queue>

using namespace std;

bool areStackAndQueueEqual(stack<int>& st, queue<int>& q) {
    if (st.size() != q.size()) {
        return false;
    }

    while (!st.empty()) {
        int stackTop = st.top();
        int queueFront = q.front();

        if (stackTop != queueFront) {
            return false;
        }

        st.pop();
        q.pop();
    }

    return true;
}

int main() {
    stack<int> st;
    queue<int> q;
    int N, M;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int value;
        cin >> value;
        st.push(value);
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        int value;
        cin >> value;
        q.push(value);
    }

    if (areStackAndQueueEqual(st, q)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
