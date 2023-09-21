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
    ListNode* reverseList(ListNode* head) {
        ListNode* current = NULL;
        ListNode* actual = head ;
        while(actual!=NULL){
        ListNode* newNode = new ListNode();
        newNode->next=current;
        newNode->val=actual->val;
        actual=actual->next;
        current = newNode;
        }
        return current;
    }
};
