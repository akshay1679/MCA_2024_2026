```c
#include <stdio.h>

#include <stdlib.h>

// Define node for linked list

typedef struct Node {

 char data;

 struct Node* next;

} Node;

// Stack using array

#define MAX 100

int stack[MAX];

int top = -1;

// Integer Queue using Array

int queue[MAX];

int front = -1, rear = -1;

// Circular Queue using Array

int circQueue[MAX];

int circFront = -1, circRear = -1;

// Deque using Array

int deque[MAX];
int dequeFront = -1, dequeRear = -1;

// Function Prototypes

void intStackPush();

void intStackPop();

void charStackPush(Node** top);

void charStackPop(Node** top);

void intQueueEnqueue();

void intQueueDequeue();

void circQueueEnqueue();

void circQueueDequeue();

void dequeInsertFront();

void dequeInsertRear();

void dequeDeleteFront();

void dequeDeleteRear();

void displayMenu();

// Menu-Driven Program

int main() {

 int choice;

 Node* charStackTop = NULL; // For linked-list-based character stack

 while (1) {

 displayMenu();

 printf("Enter your choice: ");

 scanf("%d", &choice);

 switch (choice) {

 case 1:

 intStackPush();

 break;

 case 2:

 intStackPop();

 break;
 case 3:

 charStackPush(&charStackTop);

 break;

 case 4:

 charStackPop(&charStackTop);

 break;

 case 5:

 intQueueEnqueue();

 break;

 case 6:

 intQueueDequeue();

 break;

 case 7:

 circQueueEnqueue();

 break;

 case 8:

 circQueueDequeue();

 break;

 case 9:

 dequeInsertFront();

 break;

 case 10:

 dequeInsertRear();

 break;

 case 11:

 dequeDeleteFront();

 break;

 case 12:

 dequeDeleteRear();

 break;

 case 13:

 printf("Exiting the program.\n");

 exit(0);

 default:
 printf("Invalid choice. Try again.\n");

 }

 }

 return 0;

}

// Menu Display

void displayMenu() {

 printf("\n---- Menu ----\n");

 printf("1. Push Integer to Stack (Array)\n");

 printf("2. Pop Integer from Stack (Array)\n");

 printf("3. Push Character to Stack (Linked List)\n");

 printf("4. Pop Character from Stack (Linked List)\n");

 printf("5. Enqueue Integer to Queue (Array)\n");

 printf("6. Dequeue Integer from Queue (Array)\n");

 printf("7. Enqueue Integer to Circular Queue (Array)\n");

 printf("8. Dequeue Integer from Circular Queue (Array)\n");

 printf("9. Insert Front in Deque (Array)\n");

 printf("10. Insert Rear in Deque (Array)\n");

 printf("11. Delete Front from Deque (Array)\n");

 printf("12. Delete Rear from Deque (Array)\n");

 printf("13. Exit\n");

}

// Functions for Integer Stack (Array)

void intStackPush() {

 if (top == MAX - 1) {

 printf("Stack Overflow!\n");

 } else {

 int data;

 printf("Enter integer to push: ");

 scanf("%d", &data);

 stack[++top] = data;
 printf("Pushed %d onto stack.\n", data);

 }

}

void intStackPop() {

 if (top == -1) {

 printf("Stack Underflow!\n");

 } else {

 printf("Popped %d from stack.\n", stack[top--]);

 }

}

// Functions for Character Stack (Linked List)

void charStackPush(Node** top) {

 char data;

 printf("Enter character to push: ");

 scanf(" %c", &data);

 Node* newNode = (Node*)malloc(sizeof(Node));

 newNode->data = data;

 newNode->next = *top;

 *top = newNode;

 printf("Pushed %c onto stack.\n", data);

}

void charStackPop(Node** top) {

 if (*top == NULL) {

 printf("Stack Underflow!\n");

 } else {

 Node* temp = *top;

 printf("Popped %c from stack.\n", temp->data);

 *top = temp->next;

 free(temp);

 }

}
// Functions for Integer Queue (Array)

void intQueueEnqueue() {

 if (rear == MAX - 1) {

 printf("Queue Overflow!\n");

 } else {

 int data;

 printf("Enter integer to enqueue: ");

 scanf("%d", &data);

 if (front == -1) front = 0;

 queue[++rear] = data;

 printf("Enqueued %d into queue.\n", data);

 }

}

void intQueueDequeue() {

 if (front == -1 || front > rear) {

 printf("Queue Underflow!\n");

 } else {

 printf("Dequeued %d from queue.\n", queue[front++]);

 if (front > rear) front = rear = -1;

 }

}

// Functions for Circular Queue (Array)

void circQueueEnqueue() {

 if ((circRear + 1) % MAX == circFront) {

 printf("Circular Queue Overflow!\n");

 } else {

 int data;

 printf("Enter integer to enqueue: ");

 scanf("%d", &data);

 if (circFront == -1) circFront = 0;

 circRear = (circRear + 1) % MAX;
 circQueue[circRear] = data;

 printf("Enqueued %d into circular queue.\n", data);

 }

}

void circQueueDequeue() {

 if (circFront == -1) {

 printf("Circular Queue Underflow!\n");

 } else {

 printf("Dequeued %d from circular queue.\n", circQueue[circFront]);

 if (circFront == circRear) circFront = circRear = -1;

 else circFront = (circFront + 1) % MAX;

 }

}

// Functions for Deque (Array)

void dequeInsertFront() {

 int data;

 printf("Enter integer to insert at front: ");

 scanf("%d", &data);

 if ((dequeFront == 0 && dequeRear == MAX - 1) || (dequeFront == dequeRear + 1)) {

 printf("Deque Overflow!\n");

 } else {

 if (dequeFront == -1) {

 dequeFront = dequeRear = 0;

 } else if (dequeFront == 0) {

 dequeFront = MAX - 1;

 } else {

 dequeFront--;

 }

 deque[dequeFront] = data;

 printf("Inserted %d at front of deque.\n", data);

 }

}
void dequeInsertRear() {

 int data;

 printf("Enter integer to insert at rear: ");

 scanf("%d", &data);

 if ((dequeFront == 0 && dequeRear == MAX - 1) || (dequeFront == dequeRear + 1)) {

 printf("Deque Overflow!\n");

 } else {

 if (dequeRear == -1) {

 dequeFront = dequeRear = 0;

 } else if (dequeRear == MAX - 1) {

 dequeRear = 0;

 } else {

 dequeRear++;

 }

 deque[dequeRear] = data;

 printf("Inserted %d at rear of deque.\n", data);

 }

}

void dequeDeleteFront() {

 if (dequeFront == -1) {

 printf("Deque Underflow!\n");

 } else {

 printf("Deleted %d from front of deque.\n", deque[dequeFront]);

 if (dequeFront == dequeRear) {

 dequeFront = dequeRear = -1;

 } else if (dequeFront == MAX - 1) {

 dequeFront = 0;

 } else {

 dequeFront++;

 }

 }

}
void dequeDeleteRear() {

 if (dequeRear == -1) {

 printf("Deque Underflow!\n");

 } else {

 printf("Deleted %d from rear of deque.\n", deque[dequeRear]);

 if (dequeFront == dequeRear) {

 dequeFront = dequeRear = -1;

 } else if (dequeRear == 0) {

 dequeRear = MAX - 1;

 } else {

 dequeRear--;

 }

 }

}
 
```