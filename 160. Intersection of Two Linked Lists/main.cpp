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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *newheadA =  headA;
        ListNode *newheadB =  headB;

        while(newheadA != newheadB){
            if(newheadA == NULL){
               newheadA = headB; 
            }
            else{
                newheadA = newheadA -> next;
            }
            if(newheadB == NULL){
                newheadB = headA; 
            }
            else{
                newheadB = newheadB -> next;
            }
        }
        return  newheadA;
    }
};
