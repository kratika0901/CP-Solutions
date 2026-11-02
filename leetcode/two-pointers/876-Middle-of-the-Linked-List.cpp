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
    //     ListNode *temp=head;
    //     int i=0;
    //     while(temp!=nullptr){
    //         i++;
    //         temp=temp->next;
    //     }

    //     temp=head;
    //     int mid=(i/2);
    //     while(mid>0){
    //         temp=temp->next;
    //         mid--;
    //     }
    //     return temp;
    // }
    // //TC=O(N+N/2)
    // //SC=O(1)


    //---OPTIMIZE APPROACH---//
    //(TOURTOISE AND HARE METHOD)
    ListNode *slow=head, *fast=head;
    //Odd->last Node, //Even->nullptr
    while( fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    //TC=O(N/2)
    //SC=O(1)
    }
};