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
int main(){
    int stack[TAMANIO];
    push(stack, 5);  
    push(stack, 10); 
    push(stack, 15); 
    push(stack, 20); 
    push(stack, 25);

    return 0;
}