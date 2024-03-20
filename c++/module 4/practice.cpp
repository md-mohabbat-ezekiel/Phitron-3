1(a)
Stack Memory:
Stack allocation is faster compared to heap allocation.
it is limited and has a fixed size.
The most recently added item is the first one to be removed.
It is managed automatically by the compiler.
Using for storing local variables, function arguments, and function call information.

Heap Memory:
Heap allocation is faster compared to stack allocation.
using for dynamic memory allocation.
Managed by using operators such as new and delete or malloc() and free().
For managing large amounts of memory.
It is larger compared to the stack.
1(b)
1.where you might need to create an array with a size determined during runtime.
2.dynamic memory allocation comes the responsibility of proper memory management to avoid memory leaks.
example:
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* A = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int M;
    cin >> M;

    int* B = new int[M];
    for (int i = 0; i < N; i++) 
    {
        B[i] = A[i];
    }
    delete[] A;

    for (int i = N; i < M; i++) 
    {
        cin >> B[i];
    }
    for (int i = 0; i < M; i++) 
    {
        cout << B[i] << " ";
    }
    cout << endl;

    delete[] B;

    return 0;
}

1(c):
#include<bits/stdc++.h>
using namespace std;

int main() 
{
int a;
cin>>a;
int* array = new int[a];
delete[] array;
return 0;
}
 Dynamic arrays allow you to create arrays with sizes determined at runtime.
 You have control over the lifetime of the array and can resize it dynamically.
 It help optimize memory usage. thus reducing wastage.
 By allocating memory dynamically, you can efficiently handle varying sizes.
 Runtime flexibility.
 2(a):
 When a class is defined, it specifies the attributes and behaviors that objects of that class will possess.
  The data members represent the state or characteristics of an object,
   while the member functions define the actions or operations that an object can perform.
   example:
   #include<bits/stdc++.h>
using namespace std;
class student
{
  public:
    char name[100];
    int roll;
    int clas;
    int section;

};
int main()
{
  student rahim;
   rahim.clas=9;
   rahim.roll=29;
   rahim.section='A';
   char nm1[100]="rahim";
   strcpy(rahim.name,nm1);


   student karim;
   karim.clas=10;
   karim.roll=21;
   char nm2[100];
   strcpy(karim.name,nm2);
   cout<<rahim.roll;
return 0;
}
2(b):
Constructors are important because they ensure proper initialization of objects,
 avoiding uninitialized or invalid states.
  They are automatically invoked during object creation.
   They can be overloaded to support different initialization scenarios.
    Constructors can accept parameters to customize object initialization .
    And can use initialization lists for efficient member initialization.
    example:
    #include<bits/stdc++.h>
using namespace std;
class student
{
  public:
    char name[100];
    int roll;
    int clas;
    int section;
    student(int r,int c,int s,char*n)
    {
    cout<<"I am busy"<<endl;
    roll=r;
    clas=c;
    section=s;
    strcpy(name,n);
    }
};
int main()
{
  student rahim(29,9,'A',"sefat");
  student karim(29,9,'A',"saba");
  cout<<rahim.roll<<endl;
  cout<<karim.clas<<endl;
  cout<<rahim.section<<endl;
  cout<<rahim.roll<<endl;
return 0;
}
3(a):
The size that an object allocates in memory depends on the size of its data memory.
The size of fundamental data types like int, float, char, etc., is platform-dependent.
example:
class person
{
  public:
    string name;
    float height;
    int age;
   
};
3(c):
It is an alternative to the dot operator '.' used with object instances in dynamic memory for output.