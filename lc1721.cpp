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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> a;
        ListNode* n=head;
        while(n!=nullptr){
            a.push_back(n->val);
            n=n->next;
        }
        swap(a[k-1],a[a.size()-k]);
        ListNode* an=head;
        ListNode* ans=an;
        int i=0;
        while(i<a.size()){
            ans->val=a[i];
            i++;
            ans=ans->next;
        }
        return an;


    }
};