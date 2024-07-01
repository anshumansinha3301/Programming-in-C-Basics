#include <stdio.h>
#include <stdlib.h>
 
#define MAX_SIZE 10

struct Stack {
    int arr[MAX_SIZE];
    int top;
};
void initialize(struct Stack *stack) {
    stack->top = -1;
}

int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow\n");
        return;
    }

    stack->arr[++stack->top] = value;
    printf("%d pushed to the stack\n", value);
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    return 0;
}
