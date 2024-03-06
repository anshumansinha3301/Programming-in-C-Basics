#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

struct Stack {
    int arr[MAX_SIZE];
    int top;
};

// we initialize a stack here
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// checking if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }

    return stack->arr[stack->top--];
}

int main() {
    struct Stack stack;
    initialize(&stack);

    // Push some elements onto the stack
    stack.arr[++stack.top] = 10;
    stack.arr[++stack.top] = 20;
    stack.arr[++stack.top] = 30;

    // Pop elements from the stack
    printf("%d popped from the stack\n", pop(&stack));
    printf("%d popped from the stack\n", pop(&stack));
    printf("%d popped from the stack\n", pop(&stack));


    return 0;
}
