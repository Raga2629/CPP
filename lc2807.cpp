/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* d=head;
        while(d!=nullptr && d->next!=nullptr){
            int a=d->val;
            int b=d->next->val;
            int c=gcd(a,b);
            ListNode* newnode=new ListNode(c);
            newnode->next=d->next;
            d->next=newnode;
            d=d->next->next;
        }
        return head;
    }
};