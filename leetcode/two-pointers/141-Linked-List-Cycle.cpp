/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // map<ListNode*,int> mpp;
        // ListNode* temp=head;
        // while(temp!=nullptr){
        //     if(mpp.find(temp)!=mpp.end()) return true;
        //     mpp[temp]=1;
        //     temp=temp->next;
        // }
        // return false;
        // //TC=O(N*2*logN){Depends on map}
        // //sc=O(N)

        //optimize code
        ListNode *slow=head, *fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
        //TC~O(N)
        //SC=O(1)
    }
};