#include <iostream>
#include <string>
#include <algorithm>

class person {
public:
    string name;
    float height;
    int age;

    person(const string& n, float h, int a) : name(n), height(h), age(a) {}
};

int main() {
    person rahim("rahim", 6.7, 8);
    person karim("karim", 7.7, 8);
  
    person& olderPerson = (rahim.age > karim.age) ? rahim : karim;
    cout << olderPerson.name << " is older." << endl;

    return 0;
}
