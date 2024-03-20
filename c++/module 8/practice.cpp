#include <bits/stdc++.h>
using namespace std;

int main() {
   long long int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s, a;
        getline(cin, s);
        getline(cin, a);

        int pos = s.find(a);
        while (pos != string::npos) {
            s.replace(pos, a.length(), "$");
            // pos = s.find(a, pos + 1);
        }

        cout << s << endl;
    }

    return 0;
}
