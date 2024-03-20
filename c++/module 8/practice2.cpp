#include<bits/stdc++.h>
using namespace std;

class Student 
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math;
    int eng;
    int total;

    static bool cmp(const Student& a, const Student& b) {
        if (a.total == b.total) {
            return a.id < b.id;
        }
        return a.total > b.total;
    }
};

int main() {
    int n;
    cin >> n;

    vector<Student> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math >> a[i].eng;
        a[i].total = a[i].math + a[i].eng;
    }

    sort(a.begin(), a.end(), Student::cmp);

    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math << " " << a[i].eng << endl;
    }

    return 0;
}
