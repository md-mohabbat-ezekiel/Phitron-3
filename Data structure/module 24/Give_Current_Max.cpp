#include <bits/stdc++.h>
using namespace std;
class student 
{
public:
string name;
int roll;
int marks;
student(string name, int roll, int marks) : name(name), roll(roll), marks(marks) {}

bool operator<(const student& other) const 
{
if (marks!=other.marks) 
{
return marks > other.marks;
}
return roll < other.roll;
}
};

int main() 
{
int n, q;
cin >> n;
vector<student>st;
for (int i=0;i<n;i++) 
{
string name;
int roll, marks;
cin >> name >> roll >> marks;
st.push_back(student(name, roll, marks));
}
set<student>s(st.begin(),st.end());
cin>>q;
while(q--) 
{
int c;
cin>>c;
if (c == 0) 
{
string name;
int roll, marks;
cin >> name >> roll >> marks;
s.insert(student(name, roll, marks));
cout<<(*s.begin()).name <<" "<<(*s.begin()).roll<<" "<<(*s.begin()).marks<<endl;
} 

else if(c == 1) 
{
if (s.empty()) 
{
cout << "Empty" << endl;
} 
else 
{
cout << (*s.begin()).name << " " << (*s.begin()).roll << " " << (*s.begin()).marks << endl;
}
} 

else if (c == 2) 
{
if (s.empty()) 
{
cout << "Empty" << endl;
} 
else
{
s.erase(s.begin());
if (s.empty()) 
{
cout << "Empty" << endl;
} 
else 
{
cout << (*s.begin()).name << " " << (*s.begin()).roll << " " << (*s.begin()).marks << endl;
}
}
}
}

    return 0;
}
