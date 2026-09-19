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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        int i=0,j=0,k=0;
        ListNode* dummy = new ListNode(0);
        ListNode* t=dummy;
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                t->next=list1;
                t=t->next;
                list1=list1->next;
            }
            else {
                t->next=list2;
                t=t->next;
                list2=list2->next;
            }
           
        }
            if(list1!=nullptr){
                t->next = list1;
            }
            if(list2!=nullptr){
                t->next=list2;
            }
        return dummy->next;
        
    }
};

// Here is a simple breakdown of how the code works:

// 1. The Anchor (dummy)
// ListNode* dummy = new ListNode(0); creates a fake starting node.

// ListNode* t = dummy; sets a pointer t that will move along and build the new merged list.

// Why? It gives us a fixed reference point so we easily know where the merged list begins (dummy->next).

// 2. Comparing and Stitching Nodes (while loop)
// The loop runs as long as both lists have remaining nodes (list1 != nullptr && list2 != nullptr).

// If list1->val <= list2->val: Attach list1 to t->next, advance list1 to its next node, and move t forward.

// Else: Attach list2 to t->next, advance list2 to its next node, and move t forward.

// 3. Attaching the Leftovers
// Once one list becomes empty (nullptr), the loop stops.

// Since both lists were already sorted, any remaining nodes in the unfinished list are guaranteed to be larger than everything added so far.

// The if (list1 != nullptr) and if (list2 != nullptr) checks attach the rest of that non-empty list directly onto the end of t.

// 4. Returning the Result
// return dummy->next; skips the fake anchor node (0) and returns the actual head of your newly merged list.