#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int>& st) {
    if (st.empty()) {
        return;
    }

    int top = st.top();
    st.pop();
    printStack(st);
    cout << top << " ";
    st.push(top);
}

int main() {
    stack<int> originalStack;
    stack<int> copiedStack;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int value;
        cin >> value;
        originalStack.push(value);
    }

    copiedStack = originalStack; // Copying elements from originalStack to copiedStack
    printStack(copiedStack);
    cout << endl;

    return 0;
}
