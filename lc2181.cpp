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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> ans;
        // ListNode* a=head;
        ListNode* x=head;
        x=x->next;
        int sum=0;
        while(x != nullptr){
            sum+=x->val;
            if(x->next->val!=0)
                x=x->next;
            else {
                ans.push_back(sum);
                sum=0;
                x=x->next->next;
            }
        }
        ListNode *a=head;
        int i=0;
        cout<<ans.size()<<"\n";
        while(i<ans.size()){
            a->val=ans[i];
            i++;
            if(i<ans.size())
            a=a->next;
        }
        a->next=nullptr;
        
        return head;
        
    }
};