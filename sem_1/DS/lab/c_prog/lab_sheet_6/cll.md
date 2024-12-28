```c
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int d;
	struct node *n;
} Node;

Node *hd = NULL, *lt = NULL;

Node* newNode(int v) {
	Node *nw = (Node *)malloc(sizeof(Node));
	nw->d = v;
	nw->n = nw;
	return nw;
}

Node* addNode(int v) {
	Node *nw = newNode(v);
	if (!hd) hd = nw;
	else lt->n = nw;
	lt = nw;
	lt->n = hd;
	return hd;
}

void show(Node *t) {
	if (!t) { printf("List: NULL\n"); return; }
	printf("List: ");
	do {
		printf("%d -> ", t->d);
		t = t->n;
	} while (t != hd);
	printf("HEAD\n");
}

void secLast(Node *t) {
	if (!hd || hd->n == hd) { printf("Second last: NULL\n"); return; }
	do {
		if (t->n->n == hd) { printf("Second last: %d\n", t->d); return; }
		t = t->n;
	} while (t != hd);
	printf("Second last: NULL\n");
}

void insFirst(int v) {
	Node *nw = newNode(v);
	if (!hd) hd = lt = nw;
	else { nw->n = hd; lt->n = hd = nw; }
	show(hd);
}

void insLast(int v) {
	Node *nw = newNode(v);
	if (!hd) hd = lt = nw;
	else { nw->n = hd; lt->n = nw; lt = nw; }
	show(hd);
}

void delFirst() {
	if (!hd) { printf("Underflow\n"); return; }
	Node *del = hd;
	if (hd == lt) hd = lt = NULL;
	else { hd = hd->n; lt->n = hd; }
	printf("Deleted: %d\n", del->d);
	free(del);
	show(hd);
}

void delLast() {
	if (!hd) { printf("Underflow\n"); return; }
	Node *t = hd;
	if (hd == lt) hd = lt = NULL;
	else {
		while (t->n->n != hd) t = t->n;
		Node *del = t->n;
		t->n = hd;
		lt = t;
		printf("Deleted: %d\n", del->d);
		free(del);
	}
	show(hd);
}

void midNode(Node *t) {
	Node *sp = t;
	while (sp && sp->n != hd && sp->n->n != hd) {
		sp = sp->n->n;
		t = t->n;
	}
	printf("Middle node: %d\n", t->d);
}

void split(Node *t) {
	int cnt = 1;
	Node *sp = t, *md = t;
	while (sp->n != hd) {
		cnt++;
		if (cnt % 2 == 0) md = md->n;
		sp = sp->n;
	}
	if (cnt < 2) { printf("Cannot Split\n"); return; }
	Node *s2 = md->n;
	md->n = hd;
	lt = md;
	printf("First List: ");
	show(hd);
	printf("Second List: ");
	show(s2);
}

int main() {
	char c = 'y';
	int op, v, n;
	printf("Options:\n1. Create list\n2. Show list\n3. Show second last\n4. Insert at start\n5. Insert at end\n6. Delete first\n7. Delete last\n8. Show middle\n9. Split list at middle\n");

	do {
		printf("Choose option: ");
		scanf("%d", &op);
		switch (op) {
			case 1:
				printf("Enter number of nodes: ");
				scanf("%d", &n);
				for (int i = 0; i < n; i++) {
					printf("Enter value: ");
					scanf("%d", &v);
					hd = addNode(v);
				}
				break;
			case 2: show(hd); break;
			case 3: secLast(hd); break;
			case 4:
				printf("Enter value: ");
				scanf("%d", &v);
				insFirst(v);
				break;
			case 5:
				printf("Enter value: ");
				scanf("%d", &v);
				insLast(v);
				break;
			case 6: delFirst(); break;
			case 7: delLast(); break;
			case 8: midNode(hd); break;
			case 9: split(hd); break;
			default: printf("Invalid choice!\n");
		}
		printf("Continue? (y/n): ");
		scanf(" %c", &c);
	} while (c == 'y' || c == 'Y');

	return 0;
}

```