// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++)
//   {
//    for(int j=0;j<n;j++)
//    {
   
   
//    }
  
  
  
  
//   cout<<endl;
//   }
// return 0;
// }
// \   /
//  \ /
//   X
//  / \
// /   \

// \     /
//  \   /
//   \ /
//    X
//   / \
//  /   \
// /     \

// *****
//  ***
//   *

#include <iostream>
using namespace std;

void printPattern(int N) {
    int spaces_before = 0;
    int spaces_middle = N / 2;
    bool print_x = true;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < spaces_before; j++) {
            cout << " ";
        }
        cout << "\\";
        for (int j = 0; j < spaces_middle; j++) {
            cout << " ";
        }
        if (print_x) {
            cout << "X";
        } else {
            cout << " ";
        }
        for (int j = 0; j < spaces_middle; j++) {
            cout << " ";
        }
        cout << "/" << endl;

        if (i < N / 2) {
            spaces_before++;
            spaces_middle--;
            print_x = true;
        } else {
            spaces_before--;
            spaces_middle++;
            print_x = false;
        }
    }
}

int main() {
    int N;
    cin >> N;

    printPattern(N);

    return 0;
}
