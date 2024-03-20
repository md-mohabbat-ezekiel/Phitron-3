// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
// int val;
// node*next;
//  node(int val)
//  {
//  this->val=val;
//  this->next=NULL;
//  }
// };

// void insert_tail(node*head,node*tail,node val)
// {
// node*newnode=new node(val);
// if(head==NULL)
// {
// head=newnode;
// tail=newnode;
// return;
// }
// tail->next=newnode;
// tail=newnode;

// }

// void print_link_list(node * head)
// {
// node*tmp=head;
// while(tmp!=NULL)
// {
// cout<< tmp->val<<" ";
// tmp=tmp->next;
// }
// cout<<endl;
// }

// int main()
// {
// node*head=NULL;
// node*tail=NULL;
// int val;
// while(true)
// {
// cin>>val;
// if(val==-1)break;
// insert_tail(head,tail,val);
// }

// for(node * i=head;i->next!=NULL;i=i->next)
// {
//   for(node* j=i->next;j!=NULL;j=j->next)
//   {
//     if(i->val>j->val)
//     {
//     swap(i->val,j->val);
//     }
//   }
// }


// print_link_list(head);


// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

void print_link_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    for (Node* i = head; i->next != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->val < j->val) {
                swap(i->val, j->val);
            }
        }
    }

    print_link_list(head);

    // Deallocate memory
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
