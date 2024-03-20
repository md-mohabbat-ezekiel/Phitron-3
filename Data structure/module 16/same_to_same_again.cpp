#include<bits/stdc++.h>
using namespace std;
struct node 
{
int data;
node*next;
};

class Stack 
{
// private:
node*top;
public:
Stack() 
{
top = NULL;
}

void push(int value) 
{
node*newnode = new node;
newnode->data = value;
newnode->next = top;
top = newnode;
}

int pop() 
{
 if (isEmpty()) 
 {
 cout << "Stack is empty." << endl;
 return -1;
 }

int value = top->data;
node*temp = top;
top = top->next;
delete temp;
return value;
}

bool isEmpty() 
{
return top == NULL;
}
};

class Queue 
{
// private:
node* front;
node* rear;

public:
Queue() 
{
front = NULL;
rear = NULL;
}

void enqueue(int value) 
{
node*newnode = new node;
newnode->data = value;
newnode->next = NULL;
  if (isEmpty()) 
  {
  front = newnode;
  rear = newnode;
  } 
 else 
 {
 rear->next = newnode;
 rear = newnode;
 }
}

int dequeue() 
{
if (isEmpty()) 
{
cout << "Queue is empty." << endl;
return -1;
}

int value = front->data;
node*temp = front;
front = front->next;
if (front == NULL) 
{
rear = NULL;
}
delete temp;
return value;
}

bool isEmpty() 
{
return front == NULL;
}
};

bool areListsSame(int n, int m, int* listA, int* listB) 
{
Stack stack;
Queue queue;
for (int i = 0; i < n; i++) 
{
    stack.push(listA[i]);
}

for (int i = 0; i < m; i++) 
{
    queue.enqueue(listB[i]);
}

while (!stack.isEmpty() && !queue.isEmpty()) 
{
int value1 = stack.pop();
int value2 = queue.dequeue();

if (value1 != value2)
{
    return false;
}
}
    return stack.isEmpty() && queue.isEmpty();
}

int main()
{
int N, M;
cin >> N >> M;
int* listA = new int[N];
int* listB = new int[M];

for (int i = 0; i < N; i++) 
{
cin >> listA[i];
}

for (int i = 0; i < M; i++) 
{
    cin >> listB[i];
}

if (areListsSame(N, M, listA, listB)) 
{
    cout << "YES" << endl;
}

else 
{
    cout << "NO" << endl;
}
delete[] listA;
delete[] listB;
return 0;
}