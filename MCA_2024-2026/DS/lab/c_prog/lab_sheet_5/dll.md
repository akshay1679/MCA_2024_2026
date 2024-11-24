```c
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
} Node;

Node *head = NULL;
Node *tail = NULL;

Node* createNode(int val) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

Node* addNode(int val) {
    Node *newNode = createNode(val);
    if (head == NULL) {
        head = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
    }
    tail = newNode;
    return head;
}

void display() {
    Node *temp = head;
    printf("List: ");
    while (temp) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertFirst(int val) {
    Node *newNode = createNode(val);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    display();
}

void insertLast(int val) {
    Node *newNode = createNode(val);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    display();
}

int insertAfter(int val, int key) {
    Node *temp = head;
    while (temp && temp->data != key)
        temp = temp->next;
    if (!temp) return -1;

    Node *newNode = createNode(val);
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next) temp->next->prev = newNode;
    temp->next = newNode;
    if (temp == tail) tail = newNode;

    display();
    return 0;
}

int insertBefore(int val, int key) {
    if (head && head->data == key) {
        insertFirst(val);
        return 0;
    }
    Node *temp = head;
    while (temp && temp->next && temp->next->data != key)
        temp = temp->next;
    if (!temp || !temp->next) return -1;

    Node *newNode = createNode(val);
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;

    display();
    return 0;
}

void deleteFirst() {
    if (!head) {
        printf("Underflow\n");
        return;
    }
    Node *temp = head;
    head = head->next;
    if (head) head->prev = NULL;
    else tail = NULL;
    printf("Deleted: %d\n", temp->data);
    free(temp);
    display();
}

void deleteLast() {
    if (!tail) {
        printf("Underflow\n");
        return;
    }
    Node *temp = tail;
    tail = tail->prev;
    if (tail) tail->next = NULL;
    else head = NULL;
    printf("Deleted: %d\n", temp->data);
    free(temp);
    display();
}

void deleteAfter(int key) {
    Node *temp = head;
    while (temp && temp->data != key)
        temp = temp->next;
    if (temp && temp->next) {
        Node *delNode = temp->next;
        temp->next = delNode->next;
        if (delNode->next) delNode->next->prev = temp;
        else tail = temp;
        printf("Deleted: %d\n", delNode->data);
        free(delNode);
        display();
    } else {
        printf("No node after %d\n", key);
    }
}

void main() {
    int choice, val, key;
    char cont = 'y';
    printf("Options:\n1. Create list\n2. Display list\n3. Insert first\n4. Insert last\n5. Insert after key\n6. Delete first\n7. Delete last\n8. Delete after key\n");
    do {
        printf("\nChoose option: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                addNode(val);
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Enter value: ");
                scanf("%d", &val);
                insertFirst(val);
                break;
            case 4:
                printf("Enter value: ");
                scanf("%d", &val);
                insertLast(val);
                break;
            case 5:
                printf("Enter value: ");
                scanf("%d", &val);
                printf("Enter key: ");
                scanf("%d", &key);
                if (insertAfter(val, key) < 0)
                    printf("Key not found\n");
                break;
            case 6:
                deleteFirst();
                break;
            case 7:
                deleteLast();
                break;
            case 8:
                printf("Enter key: ");
                scanf("%d", &key);
                deleteAfter(key);
                break;
            default:
                printf("Invalid option\n");
        }
        printf("Continue? (y/n): ");
        scanf(" %c", &cont);
    } while (cont == 'y' || cont == 'Y');
}

```


```c
struct node* createNode(int val)
{
	struct node *new = (struct node *)malloc(sizeof(Node));
	new->data = val;
	new->next = NULL;
	new->prev = NULL;
	return new;
}
struct node* createList(int val)
{
	struct node *new=createNode(val);
	if(head==NULL)
		head=new;
	else
	{
		last->next=new;
		new->prev=last;
	}
	last = new;
	return head;
}
```