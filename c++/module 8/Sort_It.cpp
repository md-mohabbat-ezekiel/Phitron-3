// #include<bits/stdc++.h>
// using namespace std;
// class student 
// {
// public:
//     string name;
//     int cls;
//     char section;
//     int id;
//     int math;
//     int eng;

//     int total() const 
//     {
//     return math + eng;
//     }
// };

// bool cmp(const student& a, const student& b) 
// {
//     if (a.total() == b.total()) 
//     {
//         return a.id < b.id;
//     }
//     return a.total() > b.total();
// }

// int main() 
// {
//     int n;
//     cin>>n;
//     // student a[n];
//     vector<student>a(n);
//     // student students[n];
//     for(int i=0;i<n;i++) 
//     {
//     cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id>>a[i].math>>a[i].eng;
//     }
//     sort(a.begin(),a.end(),cmp);
//     for(int i=0;i<n;i++) 
//     {
//     cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<" "<<a[i].math<<" "<<a[i].eng<<endl;
//     }
//    return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class student 
// {
// public:
//     string name;
//     int cls;
//     char section;
//     int id;
//     int math;
//     int eng;
//     int total=math+eng;
// };

// int cmp(student a,student b) 
// {
//     if (a.total== b.total) 
//     {
//         return a.id < b.id;
//     }
//     return a.total>b.total;
// }

// int main() 
// {
//     int n;
//     cin>>n;
//     vector<student>a(n);
//     for(int i=0;i<n;i++) 
//     {
//     cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id>>a[i].math>>a[i].eng;
//     }
//     sort(a.begin(),a.end(),cmp);
//     for(int i=0;i<n;i++) 
//     {
//     cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<" "<<a[i].math<<" "<<a[i].eng<<endl;
//     }
//    return 0;
// }


#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int cls;
    char section;
    int id;
    int math;
    int eng;
    int total;

    int cmp(const Student& a, const Student& b) 
    {
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

    for(int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math >> a[i].eng;
        a[i].total = a[i].math + a[i].eng;
    }

    sort(a.begin(), a.end(),student::cmp);

    for(int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math << " " << a[i].eng << endl;
    }

    return 0;
}
