#include <stdio.h>
#include <stdlib.h>

// create a custom type node
struct ListNode {
    int val;
    struct ListNode *next;
};

// funtion's prototype
struct ListNode* new_node(int val);
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
void deallocate(struct ListNode* root);

int main() {

    struct ListNode* l1;
    l1 = new_node(2);
    l1->next = new_node(4);
    l1->next->next = new_node(3);

    struct ListNode* l2;
    l2 = new_node(5);
    l2->next = new_node(6);
    l2->next->next = new_node(4);

    struct ListNode* sum = addTwoNumbers(l1, l2);

    // print the sum of l1 and l2
    for(struct ListNode* curr = sum; curr != NULL; curr = curr->next)
        printf("%d ", curr->val);
    printf("\n");

    // deallocate the memory in the heap
    deallocate(sum);
    deallocate(l1);
    deallocate(l2);

    return 0;
}

struct ListNode* new_node(int val) {
    struct ListNode* new_node = (struct ListNode*) malloc(sizeof(struct ListNode));
    if(new_node == NULL)
        exit(1);
    new_node->val = val;
    new_node->next = NULL;
    return new_node;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* dummy_head = new_node(0);
    struct ListNode* tmp = dummy_head;
    int last_digit, carry = 0, sum, l1_val, l2_val;
    
    while(l1 != NULL || l2 != NULL || carry) {
        l1_val = (l1 != NULL) ? l1->val : 0;
        l2_val = (l2 != NULL) ? l2->val : 0;
        
        sum = l1_val + l2_val + carry;
        last_digit = sum%10;
        carry = sum/10;
        
        tmp->next = new_node(last_digit);
        tmp = tmp->next;
        
        if(l1 != NULL) l1 = l1->next;
        if(l2 != NULL) l2 = l2->next;
    }

    tmp = dummy_head->next;
    free(dummy_head);

    return tmp;
}

void deallocate(struct ListNode* root) {
    struct ListNode *curr = root, *next;

    while(curr != NULL) {
        next = curr->next;
        free(curr);
        curr = next;
    }
}