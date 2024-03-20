#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverseQueue(queue<int>& q) {
    stack<int> s;

    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

void printQueue(queue<int>& q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> originalQueue;
    queue<int> reversedQueue;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int value;
        cin >> value;
        originalQueue.push(value);
    }
    reversedQueue = originalQueue; // Copying elements from originalQueue to reversedQueue
    reverseQueue(reversedQueue);   // Reversing the elements in reversedQueue
    printQueue(reversedQueue);

    return 0;
}
