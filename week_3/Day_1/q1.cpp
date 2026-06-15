#include<iostream>
#include<map>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
    map<ListNode*,bool>visit;
    ListNode* temp=head;
    if(head==NULL) return false;
    while(temp!=NULL)
    {
        visit[temp]=true;
        temp=temp->next;
        if(visit[temp]==true)
         return true;
    }
    return false;

    }
};