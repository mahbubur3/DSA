// Problem 1
class Solution {
public:
    int listLength(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            len++;
            temp = temp->next;
        }
        return len;
    }

    ListNode* middleNode(ListNode* head) {
        int len = listLength(head);
        ListNode* temp = head;
        for (int i = 1; i <= len / 2; i++) {
            temp = temp->next;
        }
        return temp;
    }
};




// Problem 2
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};





// Problem 3
class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == NULL) {
			return head;
		}

		ListNode* temp = head;
		while (temp->next != NULL) {
			if (temp->val == temp->next->val) {
				ListNode* deleteNode = temp->next;
				temp->next = temp->next->next;
				delete deleteNode;
			}
			if (temp->next == NULL) {
				break;
			} 
			if (temp->val != temp->next->val) {
				temp = temp->next;
			}
		}
		return head;
	}
}





// Problem 4
class Solution {
public:
	void makeReverse(ListNode*& head, ListNode* current) {
		if (current->next == NULL) {
			head = current;
			return;
		}

		makeReverse(head, current->next);
		current->next->next = current;
		current->next = NULL;
	}

	ListNode* reverseList(ListNode* head) {
		if (head == NULL) {
			return head;
		}

		makeReverse(head, head);
		return head;
	}
}





// Problem 5
class Solution {
public:
	void insertTail(ListNode*& head, ListNode*& tail, int val) {
		ListNode* newNode = new ListNode(val);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
			return;
		}
		tail->next = newNode;
		tail = tail->next;
	}

	void makeReverse(ListNode*& head, ListNode* current) {
		if (current->next == NULL) {
			head = current;
			return;
		}

		makeReverse(head, current->next);
		current->next->next = current;
		current->next = NULL;
	}

	bool isPalindrome(ListNode* head) {
		ListNode* newHead = NULL;
		ListNode* newTail = NULL;
		
		ListNode* temp = head;
		while (temp != NULL) {
			insertTail(newHead, newTail, temp->val);
			temp = temp->next;
		}
		makeReverse(newHead, newHead);

		temp = head;
		ListNode* temp2 = newHead;
		while (temp != NULL) {
			if (temp->val != temp2->val) {
				return false;
			}
			temp = temp->next;
			temp2 = temp2->next;
		}
		return true;
	}
}




// Problem 6
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* deleteNode = node->next;
        node->next = node->next->next;
        delete deleteNode;
    }
};
