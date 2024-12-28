

```c
// Write menu driven program to 
// To implement an integer stack using array 
// To implement a character stack using linked list 
// To implement an integer queue using array 
// To implement a character queue using linked list 
// To implement an integer circular queue using array 
// To implement a character circular queue using array 
// To implement an integer circular queue using linked list 
// To implement an integer Deque using array 
// To implement a character Deque using linked list

#include <stdio.h>
#include <stdlib.h>

#define MAX 10  // Define maximum size for array-based implementations

// Stack using Array
void push_int_stack(int *stack, int *top, int value) {
    if (*top < MAX - 1) {
        stack[++(*top)] = value;
        printf("Pushed %d to integer stack\n", value);
    } else {
        printf("Stack Overflow\n");
    }
}

int pop_int_stack(int *stack, int *top) {
    if (*top >= 0) {
        return stack[(*top)--];
    } else {
        printf("Stack Underflow\n");
        return -1;
    }
}

// Character Stack using Linked List
typedef struct CharNode {
    char data;
    struct CharNode *next;
} CharNode;

void push_char_stack(CharNode **top, char value) {
    CharNode *newNode = (CharNode*)malloc(sizeof(CharNode));
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
    printf("Pushed %c to character stack\n", value);
}

char pop_char_stack(CharNode **top) {
    if (*top) {
        CharNode *temp = *top;
        char value = temp->data;
        *top = (*top)->next;
        free(temp);
        return value;
    } else {
        printf("Stack Underflow\n");
        return '\0';
    }
}

// Queue using Array
void enqueue_int_queue(int *queue, int *rear, int value) {
    if (*rear < MAX - 1) {
        queue[++(*rear)] = value;
        printf("Enqueued %d to integer queue\n", value);
    } else {
        printf("Queue Overflow\n");
    }
}

int dequeue_int_queue(int *queue, int *front, int *rear) {
    if (*front <= *rear) {
        return queue[(*front)++];
    } else {
        printf("Queue Underflow\n");
        return -1;
    }
}

// Circular Queue using Array
void enqueue_circular_queue(int *queue, int *front, int *rear, int value) {
    if ((*rear + 1) % MAX == *front) {
        printf("Circular Queue Overflow\n");
    } else {
        *rear = (*rear + 1) % MAX;
        queue[*rear] = value;
        printf("Enqueued %d to circular queue\n", value);
    }
}

int dequeue_circular_queue(int *queue, int *front, int *rear) {
    if (*front == *rear) {
        printf("Circular Queue Underflow\n");
        return -1;
    } else {
        *front = (*front + 1) % MAX;
        return queue[*front];
    }
}

// Menu-driven function
int main() {
    int int_stack[MAX], int_queue[MAX], circular_queue[MAX];
    CharNode *char_stack = NULL;
    int top = -1, front = 0, rear = -1, choice, value;
    char ch;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push Integer to Stack (Array)\n");
        printf("2. Pop Integer from Stack (Array)\n");
        printf("3. Push Character to Stack (Linked List)\n");
        printf("4. Pop Character from Stack (Linked List)\n");
        printf("5. Enqueue Integer to Queue (Array)\n");
        printf("6. Dequeue Integer from Queue (Array)\n");
        printf("7. Enqueue Integer to Circular Queue (Array)\n");
        printf("8. Dequeue Integer from Circular Queue (Array)\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter integer to push to stack: ");
                scanf("%d", &value);
                push_int_stack(int_stack, &top, value);
                break;
            case 2:
                value = pop_int_stack(int_stack, &top);
                if (value != -1) {
                    printf("Popped %d from integer stack\n", value);
                }
                break;
            case 3:
                printf("Enter character to push to stack: ");
                scanf(" %c", &ch);
                push_char_stack(&char_stack, ch);
                break;
            case 4:
                ch = pop_char_stack(&char_stack);
                if (ch != '\0') {
                    printf("Popped %c from character stack\n", ch);
                }
                break;
            case 5:
                printf("Enter integer to enqueue to queue: ");
                scanf("%d", &value);
                enqueue_int_queue(int_queue, &rear, value);
                break;
            case 6:
                value = dequeue_int_queue(int_queue, &front, &rear);
                if (value != -1) {
                    printf("Dequeued %d from integer queue\n", value);
                }
                break;
            case 7:
                printf("Enter integer to enqueue to circular queue: ");
                scanf("%d", &value);
                enqueue_circular_queue(circular_queue, &front, &rear, value);
                break;
            case 8:
                value = dequeue_circular_queue(circular_queue, &front, &rear);
                if (value != -1) {
                    printf("Dequeued %d from circular queue\n", value);
                }
                break;
            case 9:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}


```