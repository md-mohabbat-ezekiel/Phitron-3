#include <iostream>
using namespace std;

int* get_array(int N) {
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    return arr;
}

int main() {
    int N;
    cin >> N;

    int* arr = get_array(N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}
