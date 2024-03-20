#include<bits/stdc++.h>
using namespace std;
class Student 
{
public:
    string name;
    int cls;
    char section;
    int math;
    int eng;
};
int main()
 {
    int n;
    cin >> n;
    Student a[n];
    // vector<Student>a(n);
    // int a[n];
    for (int i = 0; i < n; i++) 
    {
    cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].math>>a[i].eng;
    }
    for(int i=n-1;i>=0;i--) 
    {
    cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].math<<" "<<a[i].eng<<endl;
    }

    return 0;
}
