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

void insert_tail(node*& head, node*& tail, int val) {
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

void remove_duplicates(node*& head) 
{
if (head == NULL || head->next == NULL)
return;
unordered_set<int> uniquevalues;
node* current = head;
node* prev = NULL;
while (current != NULL) 
{
if (uniquevalues.count(current->val) == 0) {
uniquevalues.insert(current->val);
prev = current;
current = current->next;
}

else 
{
node* temp = current;
current = current->next;
if (prev != NULL)
prev->next = current;
else
head = current;
delete temp;
}
}
}

void sort_list(node*& head) 
{
vector<int> values;
node* current = head;
while (current != NULL) 
{
values.push_back(current->val);
current = current->next;
}
sort(values.begin(), values.end());
current = head;
int index = 0;
while (current != NULL) 
{
current->val = values[index++];
current = current->next;
}
}

void print_list(node* head) 
{
node* current = head;
while (current != NULL) 
{
cout << current->val << " ";
current = current->next;
}
cout << endl;
}

int main() 
{
node* head = NULL;
node* tail = NULL;
int val;

while (true) 
{
cin >> val;
if (val == -1)
break;
insert_tail(head, tail, val);
}

remove_duplicates(head);
sort_list(head);
print_list(head);
node* current = head;
while (current != NULL) 
{
node* temp = current;
current = current->next;
delete temp;
}
return 0;
}
