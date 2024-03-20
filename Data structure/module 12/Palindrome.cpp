#include <bits/stdc++.h>
using namespace std;
class node 
{
public:
int val;
node* next;
node(int val) 
{
this->val = val;
this->next = NULL;
}
};

void insert_tail(node*& head, node*& tail, int val) 
{
node* newnode = new node(val);
if (head == NULL) 
{
head = newnode;
tail = newnode;
return;
}

tail->next = newnode;
tail = tail->next;
}

node* reverse_list(node* head) 
{
node* prev = NULL;
node* curr = head;
while (curr != NULL) 
{
node* next = curr->next;
curr->next = prev;
prev = curr;
curr = next;
}
return prev;
}

bool palindrome(node* head) 
{
if (head == NULL || head->next == NULL)
return true;
node* slow = head;
node* fast = head;
while (fast->next != NULL && fast->next->next != NULL) 
{
slow = slow->next;
fast = fast->next->next;
}
node* second_half = reverse_list(slow->next);
node* p1 = head;
node* p2 = second_half;
while (p2 != NULL) 
{
if (p1->val != p2->val)return false;
p1 = p1->next;
p2 = p2->next;
}
return true;
}

int main() 
{
node* head = NULL;
node* tail = NULL;
int val;
while (true) 
{
cin >> val;
if (val == -1)break;
insert_tail(head, tail, val);
}
if (palindrome(head)) 
{
cout << "YES" << endl;
} 
else
{
cout << "NO" << endl;
}

    return 0;
}
