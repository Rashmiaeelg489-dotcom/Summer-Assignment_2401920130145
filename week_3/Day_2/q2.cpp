#include<iostream>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int c=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            c++;
        }
        int f=c-n;

        if(f==0)
        {
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        temp=head;
        for(int i=1;i<f;i++)
        {
            temp=temp->next;
        
        }
        ListNode* p=temp->next;
        temp->next=p->next;
        delete p;
        return head;


    }
};