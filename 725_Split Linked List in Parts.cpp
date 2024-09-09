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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int sizee=0;
        ListNode* temp=head;
        while(temp)
        {
            sizee++;
            temp=temp->next;
        }
        vector<ListNode*> ans(k,NULL);
        temp=head;
        int avg=sizee/k;
        int extra=sizee%k;
        ListNode* prev=NULL;
       for(int i=0;temp !=NULL && i<k;i++)
       {
        ans[i]=temp;
        for(int count=1;count<=(avg+(extra>0?1:0));count++)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        extra--;
       }
        return ans;
    }
};