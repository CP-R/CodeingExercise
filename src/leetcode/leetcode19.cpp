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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    	int cnt = 0;
	ListNode* p = head;
	while(head != nullptr)
	{
	    cnt++;
	    p = p->next();
	}
	p = head->next();
	int pos = 1;
	while(pos != (cnt - n))
	{
	    p = p->next();
	    head = head->next();
	}	
    }
};
