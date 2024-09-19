
## Syntax for creating a node

```
struct Node
{
int data;
Struct Node *next; //declaration of pointer that points to another node
};

```


**we can use typedef to change the name of  "struct Node" to simpley node" **
```
typedef struct Node
{
int data;
Struct Node *next; //declaration of pointer that points to another node
}Node;
```

now we can use the name "node" in all places 

```
 struct Node* head = NULL;  // Initializing an empty list

void insert(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
	newNode->data = value;
	newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

```

## Syntax for traverse a node

```
void traverse() {  
     struct Node* temp = head;  
     while (temp != NULL) {  
         printf("%d ", temp->data);  
         temp = temp->next;  
     }  
 }
```

### Questions

- [ ] Write the condition for traversal in singly linked list ?
	- [ ] temp = temp->next; 
- [ ] While loop condition in singly linked list ?
	- [ ]      while (temp != NULL) 


## Syntax for creating a node
```
 void delete(int value) {  
     if (head == NULL) {  
         printf("List is empty.");  
         return;  
     }  

     struct Node* current = head;  
     struct Node* previous = NULL;  

     while (current != NULL) {  
         if (current->data == value) {  
             if (previous == NULL) {  
                 head = current->next;  
             } else {  
                 previous->next = current->next;  
             }  
             free(current);  
             return;  
         }  
         previous = current;  
         current = current->next;  
     }  

     printf("Element not found in the list.");  
 }
```

==also include the free statement in the deletion program==

```
 #include <stdio.h>  
 #include <stdlib.h>  

 // Singly Linked List structure  
 struct Node {  
     int data;  
     struct Node* next;  
 };  

 // Global head pointer  
 struct Node* head = NULL;  

 // Function to insert a node at the end of the list  
 void insert(int value) {  
     // Create a new node  
     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));  
     newNode->data = value;  
     newNode->next = NULL;  

     // Check if the list is empty  
     if (head == NULL) {  
         head = newNode;  
     } else {  
         // Traverse to the end of the list  
         struct Node* current = head;  
         while (current->next != NULL) {  
             current = current->next;  
         }  
         // Link the new node to the last node  
         current->next = newNode;  
     }  
 }  

 // Function to traverse and print the list  
 void traverse() {  
     struct Node* current = head;  
     while (current != NULL) {  
         printf("%d ", current->data);  
         current = current->next;  
     }  
 }  

 int main() {  
     // Insert elements into the list  
     insert(10);  
     insert(20);  
     insert(30);  
     insert(40);  

     // Traverse and print the list  
     printf("List: ");  
     traverse();  

     return 0;  
 }
```



