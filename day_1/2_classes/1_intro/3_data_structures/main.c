#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} node;

node* get_list() {
    node* list = NULL;
    node *n = malloc(sizeof(node));
    n->number = 1;
    n->next = NULL;
    return n;
}

void append(node* last, int next) {

}

void index() {
    
}

int main() {

    return 0;
}
