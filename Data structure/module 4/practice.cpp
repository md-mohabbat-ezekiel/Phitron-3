#include <iostream>
#include <cmath>
using namespace std;

void printPattern(int N) 
{
      for (int a = 0; a < (N/2); a++) 
    { 
      int x[N];
        for (int j = 0; j < (N); j++) 
       {
        x[i]=" ";
       x[0]="\\";
       x[N]="//"
      



       }  

       for (int k =(N/2); k<= (N/2); k++) 
       {
       cout<<"x";
       }  
       cout<<endl;
    }
     
// middel line
      for (int b =N/2; b <=(N/2); b++) 
    {
        for (int j = 0; j < (N/2)-1; j++) 
       {
       cout<<" ";
       }   
       for (int k =(N/2); k<= (N/2); k++) 
       {
       cout<<"x";
       }  
       for (int l =(N/2)+1; l< N; l++) 
       {
       cout<<" ";
       } 
       cout<<endl;
    }

//LAST PATTERN
  for (int c = (N/2)+1; c < N; c++)
  { 
        for (int j = 0; j < (N/2)-1; j++) 
       {
       cout<<" ";
       }    
       for (int k =(N/2); k<= (N/2); k++) 
       {
       cout<<"x";
       }  
       for (int l =(N/2)+1; l< N; l++) 
       {
       cout<<" ";
       } 
       cout<<endl;
    }

}

int main() {
    int N;
    cin >> N;

    printPattern(N);

    return 0;
}

