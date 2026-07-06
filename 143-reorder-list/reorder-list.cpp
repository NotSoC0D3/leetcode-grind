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
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast && fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
        }

        ListNode* front = slow -> next;
        slow -> next = nullptr;
        ListNode* cur = front;
        ListNode* prev = nullptr;

        while(cur){
            front = front -> next;
            cur -> next = prev;
            prev = cur;
            cur = front;
        }
        ListNode* l1 = head;
        ListNode* temp = head;

        while(l1 && prev){
            l1 = l1 -> next;
            temp -> next = prev;
            temp = prev -> next;
            prev -> next = l1;
            prev = temp;
            temp = l1;
        }
        
    }
        
};