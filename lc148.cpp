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
    ListNode* findMid(ListNode* head){
        ListNode*s=head;
        ListNode*f=head;
        while(f->next != nullptr && f->next->next!=nullptr){
            s=s->next;
            f=f->next->next;
        }
       
        return s;
    }
    ListNode* merge(ListNode* list1, ListNode* list2){
        ListNode dummy(0);
        ListNode* t=&dummy;
        while(list1 !=nullptr && list2 !=nullptr){
            if(list1->val < list2->val){
                t->next=list1;
                t=t->next;
                list1=list1->next;
            }
            else{
                t->next=list2;
                t=t->next;
                list2=list2->next;
            }
        }
        if(list1!=nullptr){
            t->next=list1;
        }
        if(list2!=nullptr){
            t->next=list2;
        }
        return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next ==nullptr) return head;
        ListNode* mid=findMid(head);
        ListNode* sh=mid->next;
        mid->next=nullptr;
        return merge(sortList(head),sortList(sh));
    }
};

// By setting mid->next = nullptr, you physically break the pointer chain into two separate, smaller linked lists:Left Half: Starting at head, the chain now ends at 2
