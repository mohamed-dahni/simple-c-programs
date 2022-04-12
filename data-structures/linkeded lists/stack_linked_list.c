#include <stdio.h>

// make a custom data type
typedef struct person {
    char* name;
    struct person* next;
} person;

// the prototype of the display function
void display(person* t);

// the main function
int main() {
    // initialize the structs
    person pr1 = {"mohamed", NULL};
    person pr2 = {"ahmad", NULL};
    person pr3 = {"hamza", NULL};
    person pr4 = {"reda", NULL};
    person pr5 = {"anas", NULL};
    person pr6 = {"kasem", NULL};

    // link the persons together
    pr1.next = &pr2;
    pr2.next = &pr3;
    pr3.next = &pr4;
    pr4.next = &pr5;
    pr5.next = &pr6;

    // insert a new person at the end
    person pr7 = {"bilal", NULL};
    pr6.next = &pr7;
    // insert a new person at the middle
    person prmid = {"yasin", NULL};
    prmid.next = &pr5;
    pr4.next = &prmid;
    // insert a new person at the start
    person pr0 = {"youssef", NULL};
    pr0.next = &pr1;

    // print the linked list
    display(&pr0);

    // return seccuss
    return 0;
}

void display(person* t) {
    for(; t != NULL; t = t->next)
        printf("%s\n", t->name);
}