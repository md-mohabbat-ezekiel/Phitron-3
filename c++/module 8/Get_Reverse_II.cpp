// #include<bits/stdc++.h>
// using namespace std;
// class Student 
// {
// public:
//     string name;
//     int cls;
//     char section;
//     int id;
// };
// int main()
//  {
//     int n;
//     cin >> n;
//     Student a[n];
//     // vector<Student>a(n);
//     // int a[n];
//     for (int i = 0; i < n; i++) 
//     {
//     cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id;
//     }
//     for (int i = 0; i < n; i++) 
//     { 
//        for(int j=n-1;j>=0;j--)
//        {
//        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[j].id<<endl;
//        }
      
//     }
//      for(int i=n-1;i>=0;i--)
//      {
//      cout<<a[i].id<<endl;
//      }

//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
class student 
{
public:
string name;
int cls;
char section;
int id;
};
int main()
 {
    int n;
    cin>>n;
    
     student a[n];
    for(int i=0;i<n;i++) 
    {
    cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id;
    }
    for(int i=0;i<n/2;i++) 
    {
    swap(a[i].id,a[n-1-i].id);
    }
    for(int i=0;i<n;i++) 
    {
    cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<endl;
    }
    return 0;
}


