class Solution {
public:
void insert_tail(ListNode*& head,ListNode*& tail,int val)
{
ListNode*newnode=new ListNode(val);
if(head==NULL)
{
head=newnode;
tail=newnode;
return;
}  
tail->next=newnode;
tail=tail->next; 
}

 void reverse(ListNode*&head,ListNode*cur)
    {
     if(cur->next==NULL)
     {
        head=cur;
        return;
     }
     reverse(head,cur->next);
     cur->next->next=cur;
     cur->next=NULL;
    }


    bool isPalindrome(ListNode* head) {
     ListNode*newHead=NULL;
     ListNode*newTail=NULL;
     ListNode*tmp=head;
     while(tmp!=NULL)
     {
       insert_tail(newHead,newTail,tmp->val); 
       tmp=tmp->next; 
     }  
     reverse(newHead,newHead);
     tmp=head;
     ListNode*tmp2=newHead;
     while(tmp!=NULL)
     {
     if(tmp->val!=tmp2->val)return false;
     tmp=tmp->next;
     tmp2=tmp2->next;
     } 
     return true;
    }
    
};