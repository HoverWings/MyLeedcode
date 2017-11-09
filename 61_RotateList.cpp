/**
 * Definition for singly-linked list.
**/
#include<assert.h>
#include<iostream>
#include<stdio.h>

using namespace std;
typedef struct ListNode 
{
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
}ListNode;

class Solution 
{
public:
    ListNode* rotateRight(ListNode* head, int k) 
    {
        ListNode* oriHead=head;
        int index=0;
        if(index!=k)
        {
            head=head->next;
            index++;
        }
        assert(head->next!=NULL);
        head=head->next;
        ListNode* nowHead=head;
        while(head->next!=NULL)
        {
            head=head->next;
        }
        head->next=oriHead;
        return nowHead;

    }
};

int main()
{
    ListNode node1;
    node1->val=1;
    printf("%d",&node->val);
    return 0;
}