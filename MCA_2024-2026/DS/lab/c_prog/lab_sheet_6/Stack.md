```c
#include <stdio.h>
#include <stdlib.h> // for malloc
#include <stdbool.h>  // for bool data type
#define SIZE 5 // size of stack
typedef struct {

    int top;

    int elements[SIZE]; // stack elements

} Stack;
Stack *stackPtr; // creating a stack pointer


// stack full check

bool isFull(Stack *stackPtr) {

    return stackPtr->top == SIZE - 1;

}



// push operation

void push(Stack *stackPtr, int value) {

    if (isFull(stackPtr)) {

        printf("Stack full!!!!!\n");

    } else {

        stackPtr->top++;

        stackPtr->elements[stackPtr->top] = value;

    }

}



// stack empty check

bool isEmpty(Stack *stackPtr) {

    return stackPtr->top == -1;

}



// pop operation

int pop(Stack *stackPtr) {

    if (isEmpty(stackPtr)) {

        printf("Stack empty!!!!!\n");

        return -1; // return -1 when stack is empty

    } else {

        int poppedValue = stackPtr->elements[stackPtr->top];

        stackPtr->top--;

        return poppedValue;

    }

}



// display stack

void display(Stack *stackPtr) {

    printf("\nStack is:\n");

    for (int i = stackPtr->top; i >= 0; i--) {

        printf("%d\n", stackPtr->elements[i]);

    }

}



int main() {

    int value, choice;



    // stack creation

    stackPtr = (Stack *)malloc(sizeof(Stack));

    // check if memory has been allocated successfully

    if (stackPtr == NULL) {

        printf("Memory not allocated");

        exit(0);

    } else {

        stackPtr->top = -1;

    }



    printf("\n**** Implementing a stack **** \n_____________________________________\n");

    do {

        printf("\nMenu:\n");

        printf("\t1: Push\n");

        printf("\t2: Pop\n");

        printf("\t3: Display\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);



        switch (choice) {

            case 1:

                printf("Enter the value to push: ");

                scanf("%d", &value);

                push(stackPtr, value);

                break;

            case 2: {

                int poppedValue = pop(stackPtr);

                if (poppedValue != -1) {

                    printf("Popped item is %d\n", poppedValue);

                }

                break;

            }

            case 3:

                display(stackPtr);

                break;

            default:

                printf("Exiting...\n");

                break;

        }

    } while (choice == 1 || choice == 2 || choice == 3);



    free(stackPtr); // releasing the allocated memory to the pointer stackPtr

    return 0;

}



```
