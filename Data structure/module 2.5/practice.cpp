#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (std::find(a.begin() + i + 1, a.end(), a[i]) != a.end()) {
            cnt++;
        }
    }

    std::cout << cnt << std::endl;
    return 0;
}
