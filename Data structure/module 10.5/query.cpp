// #include<bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* next;
//     Node* prev;

//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void insertAt(Node*& head, int index, int value) {
//     Node* newNode = new Node(value);
    
//     if (index < 0) {
//         cout << "Invalid" << endl;
//         return;
//     }
    
//     if (index == 0) {
//         newNode->next = head;
//         if (head != NULL)
//             head->prev = newNode;
//         head = newNode;
//         return;
//     }
    
//     Node* current = head;
//     int count = 0;
//     while (current != NULL && count < index) {
//         current = current->next;
//         count++;
//     }
    
//     if (current == NULL && count < index) {
//         cout << "Invalid" << endl;
//         return;
//     }
    
//     newNode->next = current;
//     newNode->prev = current->prev;
//     current->prev = newNode;
    
//     if (newNode->prev != NULL)
//         newNode->prev->next = newNode;
// }

// void printListLeftToRight(Node* head) {
//     while (head != NULL) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// void printListRightToLeft(Node* tail) {
//     while (tail != NULL) {
//         cout << tail->val << " ";
//         tail = tail->prev;
//     }
//     cout << endl;
// }

// int main() {
//     Node* head = NULL;
//     Node* tail = NULL;
//     int Q, X, V;
//     cin >> Q;

//     while (Q--) {
//         cin >> X >> V;
//         insertAt(head, X, V);
//         printListLeftToRight(head);
//         printListRightToLeft(tail);
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class node
{
public:
int val;
node*next;
node(int val)
{
this->val=val;
this->next=NULL;
}
};


void insert_head(node*& head,node*& tail,int val) 
{
node*newnode = new node(val);
if(head==NULL) 
{
head=newnode;
tail=newnode;
} 
else 
{
newnode->next=head;
head=newnode;
}
}


void insert_tail(node*& head,node*& tail,int val) 
{
node*newnode=new node(val);
if(head==NULL) 
{
head=newnode;
tail=newnode;
} 
else 
{
tail->next=newnode;
tail=newnode;
}
}


void print_head_tail(node*head,node*tail) 
{
if(head==NULL||tail==NULL) 
{
cout<<"Empty List"<<endl;
}
else 
{
cout<<head->val<<" "<<tail->val<<endl;
}
}

int main() 
{
node*head=NULL;
node*tail=NULL;
int q;
cin>>q;
for(int i=0;i<q;i++) 
{
int x,v;
cin>>x>>v;
if(x==0) 
{
insert_head(head, tail,v);
} 
else if(x==1) 
{
insert_tail(head,tail,v);
}
print_head_tail(head, tail);
}
 return 0;
}
