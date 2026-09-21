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
    int numComponents(ListNode* head, vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int n=nums.size();
        ListNode* d=head;
        int cnt=0;
            while(d){
                if(s.count(d->val) && ((d->next==nullptr) ||!s.count(d->next->val))){
                    cnt++;
                }
                d=d->next;
            }
            return cnt;
    }
};