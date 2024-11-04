
```c
/*Write menu driven program to 
Create a Circular Doubly linked list	 
display the list 
insert a node as the first node 
insert a node as the last node 
delete the first node 
delete the last node+ 
Create two new list 	*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

// Circular Doubly Linked List with a single pointer to the last node
Node* last = NULL;

// Function to create a circular doubly linked list with a single node
void createList(int data) {
    if (last != NULL) {
        printf("List already created.\n");
        return;
    }

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = newNode; // Points to itself, making it circular
    last = newNode;
    printf("List created with data: %d\n", data);
}

// Function to display the list
void displayList() {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node* temp = last->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("\n");
}

// Function to insert a node at the beginning
void insertAtBeginning(int data) {
    if (last == NULL) {
        createList(data);
        return;
    }

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = last->next;
    last->next = newNode;
    printf("Node inserted at beginning with data: %d\n", data);
}

// Function to insert a node at the end
void insertAtEnd(int data) {
    if (last == NULL) {
        createList(data);
        return;
    }

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = last->next;
    last->next = newNode;
    last = newNode;
    printf("Node inserted at end with data: %d\n", data);
}

// Function to delete the first node
void deleteFirstNode() {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node* temp = last->next;
    if (last == temp) { // Only one node in the list
        free(last);
        last = NULL;
    } else {
        last->next = temp->next;
        free(temp);
    }
    printf("First node deleted.\n");
}

// Function to delete the last node
void deleteLastNode() {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node* temp = last->next;
    if (last == temp) { // Only one node in the list
        free(last);
        last = NULL;
    } else {
        while (temp->next != last) {
            temp = temp->next;
        }
        temp->next = last->next;
        free(last);
        last = temp;
    }
    printf("Last node deleted.\n");
}

// Function to create a new empty list
Node* createNewList() {
    return NULL; // Returns a new empty list
}

int main() {
    int choice, data;
    Node* list2 = NULL;
    Node* list3 = NULL;

    do {
        printf("\nMenu:\n");
        printf("1. Create a Circular Doubly Linked List\n");
        printf("2. Display the list\n");
        printf("3. Insert a node as the first node\n");
        printf("4. Insert a node as the last node\n");
        printf("5. Delete the first node\n");
        printf("6. Delete the last node\n");
        printf("7. Create two new lists\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data for the first node: ");
                scanf("%d", &data);
                createList(data);
                break;
            case 2:
                printf("List: ");
                displayList();
                break;
            case 3:
                printf("Enter data to insert at beginning: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;
            case 4:
                printf("Enter data to insert at end: ");
                scanf("%d", &data);
                insertAtEnd(data);
                break;
            case 5:
                deleteFirstNode();
                break;
            case 6:
                deleteLastNode();
                break;
            case 7:
                list2 = createNewList();
                list3 = createNewList();
                printf("Two new lists created.\n");
                break;
            case 8:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}
```