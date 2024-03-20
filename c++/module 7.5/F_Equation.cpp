#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;

    long long int cnt = 0;

    for (int i = 0; i <= b; i += 2)
    {
        long long int eqn = 1;
        if (i > 0)
        {
            for (int j = 0; j < i; j++)
            {
                eqn *= a;
            }
        }
        cnt += eqn - (i == 0 ? 1 : 0);
    }

    cout << cnt << endl;

    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int* a = new long long int();
//     long long int* b = new long long int();
//     cin >> *a >> *b;

//     long long int* cnt = new long long int(1);
//     long long int* c = new long long int[*b];

//     for (int i = 0; i < *b; i+=2)
//     {
//         c[i] = i;
//         long long int eqn = pow(*a, c[i]);
//         *cnt = *cnt + eqn;
//     }

//     cout << *cnt << endl;

//     delete a;
//     delete b;
//     delete cnt;
//     delete[] c;

//     return 0;
// }


// S = (X0 - 1) + (X2) + (X4) + (X6) + ............... + (XN)