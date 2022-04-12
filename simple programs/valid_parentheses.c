#include <stdio.h> 
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

void push(char val, char stack[], int stack_size, int* top) {
    if((*top) == -1) {
        stack[0] = val;
        *top = 0;
        return;
    } else if(*top == stack_size-1)
        return;

    (*top)++;
    stack[*top] = val;
}

char pop(char stack[], int stack_size, int* top) {
    if(*top == -1)
        return -1;
    int val = stack[*top];
    (*top)--;
    return val;
}

char lookup(char val) {
    if(val == '(')
        return ')';
    else if(val == '[')
        return ']';
    else if('{')
        return '}';
}

bool isValid(char * s){
    int top = -1, stack_size = strlen(s), i = 0;
    char stack[stack_size];
    
    while(s[i]) {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            push(s[i], stack, stack_size, &top);
        } else if(s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if(lookup(pop(stack, stack_size, &top)) != s[i])
                return false;
        }
        
        i++;
    }
    if(pop(stack, stack_size, &top) == -1)
        return true;
    return false;
}

int main(void) {
    
    printf("%i\n", isValid("()[]{}"));

    return 0;
}