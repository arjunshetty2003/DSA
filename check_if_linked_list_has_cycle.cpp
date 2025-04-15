//Brute Force O(n*2log(n))
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
        ListNode* temp = head;
        map<ListNode* , int> nodeStore;

        while (temp != nullptr) {
            if (nodeStore.find(temp) != nodeStore.end()) {
                return true;
            }
            nodeStore[temp] = 1;
            temp = temp->next;
        }

        return false;
    }
};

//Optimal Approach O(n)

