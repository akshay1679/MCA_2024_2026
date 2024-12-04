```c
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int d;
	struct node *nxt, *prv;
} Node;

Node *hd = NULL, *lst = NULL;

Node* createNode(int val) {
	Node *new = (Node *)malloc(sizeof(Node));
	new->d = val;
	new->nxt = new->prv = NULL;
	return new;
}

Node* createList(int val) {
	Node *new = createNode(val);
	if (hd == NULL) {
		hd = lst = new;
	} else {
		lst->nxt = new;
		new->prv = lst;
		lst = new;
	}
	lst->nxt = hd;
	hd->prv = lst;
	return hd;
}

void display(Node *temp) {
	if (temp) {
		printf("List: ");
		do {
			printf("%d <-> ", temp->d);
			temp = temp->nxt;
		} while (temp != hd);
		printf("HEAD\n");
	} else {
		printf("List is empty\n");
	}
}

void insertFirst(int val) {	
	Node *new = createNode(val);
	if (hd == NULL) {
		hd = createList(val);
		return;
	}
	new->nxt = hd;
	new->prv = lst;
	lst->nxt = new;
	hd->prv = new;
	hd = new;
	display(hd);
}

void insertLast(int val) {
	Node *new = createNode(val);
	if (hd == NULL) {
		hd = createList(val);
		return;
	}
	new->nxt = hd;
	new->prv = lst;
	lst->nxt = new;
	hd->prv = new;
	lst = new;
	display(hd);
}

void deleteFirst() {
	if (!hd) {
		printf("UNDERFLOW\n");
		return;
	}
	Node *del = hd;
	if (hd == lst) {
		hd = lst = NULL;
	} else {
		hd = hd->nxt;
		hd->prv = lst;
		lst->nxt = hd;
	}
	printf("Deleted: %d\n", del->d);
	free(del);
	display(hd);
}

void deleteLast() {
	if (!lst) {
		printf("UNDERFLOW\n");
		return;
	}
	Node *del = lst;
	if (hd == lst) {
		hd = lst = NULL;
	} else {
		lst = lst->prv;
		lst->nxt = hd;
		hd->prv = lst;
	}
	printf("Deleted: %d\n", del->d);
	free(del);
	display(hd);
}

int main() {
	char cont = 'y';
	int opt, val, n;
	printf("Options:\n1. Create list\n2. Display list\n3. Insert at start\n4. Insert at end\n5. Delete first\n6. Delete last\n");

	do {
		printf("Choose an option: ");
		scanf("%d", &opt);
		switch (opt) {
			case 1:
				printf("Enter number of nodes: ");
				scanf("%d", &n);
				for (int i = 0; i < n; i++) {
					printf("Enter value: ");
					scanf("%d", &val);
					hd = createList(val);
				}
				printf("List created!\n");
				break;
			case 2:
				display(hd);
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
				deleteFirst();
				break;
			case 6:
				deleteLast();
				break;
			default:
				printf("Invalid choice!\n");
		}
		printf("Continue? (y/n): ");
		scanf(" %c", &cont);
	} while (cont == 'y' || cont == 'Y');

	return 0;
}

```