#include<stdio.h> 
#define TAMANIO 100

int count = 0; 

int isEmpty() {
    return count == 0 ? 1 : 0;
}


void push(int stack[], int data){
    if(count<TAMANIO-1) {
        stack[count] = data;
        ++count;
    } else {
        printf("Stack is over flow\n");
    }
}

int pop(int stack[]) {
    int data = stack[count-1];
    stack[count-1] = 0;
    --count;
    return data;
}

void printStack(int stack[]) {
    printf("TOP -> ");
    for(int i = count-1; i >= 0; i--){
        printf("(%d) -> ", stack[i]);
    }
    printf("NULL\n");
}

int main(){
    int stack[TAMANIO];
    push(stack, 5);  
    push(stack, 10); 
    push(stack, 15); 
    push(stack, 20); 
    push(stack, 25);

    int value1 = pop(stack);
    printf("Pop value %d\n", value1);
    push(stack, 30);
    push(stack, 35);
    value1 = pop(stack);
    printf("Pop value %d\n", value1);
    printStack(stack);
    
    return 0;
}
