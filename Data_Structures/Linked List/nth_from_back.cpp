 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *node = head;
        ListNode *prev = head;
        int count = 0;
        while(node->next != NULL) 
        {
            count++;
            node = node->next;
        }
        n = count - n;
        node = head;
        while(n>0)
        {
            n--;
            node = node->next;
            
        }
        node->next = (node->next)->next;
        return head;
    }
};