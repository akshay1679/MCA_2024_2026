## Double Linked List


![[Doubly-linked-list-in-DS-1.webp]]
#### Code

```
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the doubly linked list
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to append a node at the end of the list
void append(Node** headRef, int data) {
    Node* newNode = createNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    
    Node* temp = *headRef;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->prev = temp;
}

// Function to print the list from head to tail
void printListForward(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to print the list from tail to head
void printListBackward(Node* head) {
    if (head == NULL) return;
    
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

// Function to free all nodes in the list
void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL;

    // Append nodes to the list
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

    // Print the list forward
    printf("List in forward direction: ");
    printListForward(head);

    // Print the list backward
    printf("List in backward direction: ");
    printListBackward(head);

    // Free the list
    freeList(head);

    return 0;
}

```

### STRUCTURE OF NODE
```
struct
{
int data;
struct node * pre;
struct node * next;
}
```

### Creating a node in double linked list

**Algorithem**

1. first insert data
2. pre = NULL
3. next = NULL
#### Code

```
NODE(int value)
{

	struct node * new = malloc (size of (struct))
	new -> data = val;
	new -> next = NULL;
	new -> pre = NULL;
	retuen new

}
```


### Forward traversal

**algorithm**

	temp = head
	while(temp != NULL)
	{
	print(temp -> data)
	temp = temp -> next
	}
#### Code

```
// Function to print the list from head to tail (forward traversal)
void printListForward(Node* head) {
    Node* temp = head;
    printf("List in forward direction: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


```

### Backward traversal

#### Code

```

// Function to print the list from head to tail (forward traversal)
void printListForward(Node* head) {
    Node* temp = head;
    printf("List in forward direction: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to print the list from tail to head (backward traversal)
void printListBackward(Node* head) {
    // Step 1: Traverse to the end of the list
    Node* temp = head;
    if (temp == NULL) return; // Empty list

    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Step 2: Traverse backwards from the last node
    printf("List in backward direction: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

```

### Question

write a function to display list in backword dirr where we assume that we have a pointer p pointing to the first node

```
temp = p
while(temp -> next != null)
{
temp = temp -> next
}
while(temp != null)
{
print(temp -> data)
temp = temp -> pre
}
```

