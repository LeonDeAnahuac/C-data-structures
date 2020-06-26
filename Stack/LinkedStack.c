#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node Node;
typedef Node *ptrNode;

int isEmpty(ptrNode top) {
    return top == NULL ? 1 : 0;
}

void push(ptrNode *top, int data) {
    ptrNode ptrNewNode;
    ptrNewNode = malloc(sizeof(Node));
    ptrNewNode->data = data;
    ptrNewNode->next = *top;
    *top = ptrNewNode;
}


int main() {
    ptrNode top = NULL;
    push(&top, 10);
    int res = isEmpty(top);
    printf("%d\n", res);
    return 0;
}