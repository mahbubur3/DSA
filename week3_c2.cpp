class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while (temp->next != NULL) {
            int defineGcd = __gcd(temp->val, temp->next->val);
            ListNode* newNode = new ListNode(defineGcd);

            newNode->next = temp->next;
            temp->next = newNode;

            temp = temp->next->next;
        }

        return head;
    }
};




class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        for (ListNode* tempA = headA; tempA != NULL; tempA = tempA->next) {
            for (ListNode* tempB = headB; tempB != NULL; tempB = tempB->next) {
                if (tempA == tempB) {
                    return tempA;
                }
            }
        }

        return NULL;
    }
};






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

    int getDecimalValue(ListNode* head) {
        int len = listLength(head);
        int x = pow(2, len - 1);

        int total = 0;
        ListNode* temp = head;
        for (ListNode* temp = head; temp != NULL; temp = temp->next) {
            if (temp->val == 1) {
                total = total + x;
            }
            x = x / 2;
        }
        return total;
    }
};





ListNode* temp = list1;
for (int i = 1; i < a; i++) {
    temp = temp->next;
}

ListNode* temp2 = temp->next;
for (int i = a; i <= b; i++) {
    temp2 = temp2->next;
}

temp->next = list2;

ListNode* temp3 = list2;
while (temp3->next != NULL) {
    temp3 = temp3->next;
}

temp3->next = temp2;
return list1;





class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* i = head;
        ListNode* j = head->next;
        while (i != NULL && j != NULL) {
            swap(i->val, j->val);
            i = i->next->next;
            if (i == NULL) {
                break;
            }
            j = j->next->next;
        }

        return head;
    }
};
