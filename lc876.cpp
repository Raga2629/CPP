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
    ListNode* middleNode(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head;
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        if(f->next==NULL)
        return s;
        else return s->next;
    }
};//slow pointer and fast pointer
// s moves 1 time, f moves 2 times