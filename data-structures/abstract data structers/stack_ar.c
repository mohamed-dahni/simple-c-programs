
#include <stdio.h>

void push(int val, int stack[], int stack_size, int* top);
int pop(int stack[], int stack_size, int* top);

int  main() {

    int stack[15];
    int top = -1, stack_size = sizeof(stack)/sizeof(stack[0]);
    push(5, stack, stack_size, &top);
    push(4, stack, stack_size, &top);
    push(3, stack, stack_size, &top);
    push(1, stack, stack_size, &top);
    push(0, stack, stack_size, &top);
    push(8, stack, stack_size, &top);
    push(9, stack, stack_size, &top);

    for(int i = 0; i < 8; i++)
        printf("%d\n", pop(stack, stack_size, &top));

    return 0;
}

void push(int val, int stack[], int stack_size, int* top) {
    if((*top) == -1) {
        stack[0] = val;
        *top = 0;
        return;
    } else if(*top == stack_size-1)
        return;

    (*top)++;
    stack[*top] = val;
}

int pop(int stack[], int stack_size, int* top) {
    if(*top == -1)
        return -1;
    int val = stack[*top];
    (*top)--;
    return val;
}