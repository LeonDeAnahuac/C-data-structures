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

int pop(ptrNode *top) {
    ptrNode  ptrTemp = *top;
    int data = (*top)->data;
    *top = (*top)->next;
    free(ptrTemp);

    return data;
}

void printStack(ptrNode *top) {
    ptrNode ptrTemp = *top;
    printf("TOP -> ");
    while(ptrTemp != NULL) {
        printf(" (%d, next) -> ", ptrTemp->data);
        ptrTemp = ptrTemp->next;
    }
    printf("NULL\n");

}

int main() {

    ptrNode top = NULL;
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    int value1 = pop(&top);
    printf("Se saco el elemento %d\n", value1);
    push(&top, 40);
    printStack(&top);
    return 0;
}