#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}Node;
// typedef struct node Node; aliasing

struct node *head = NULL;
struct node *last = NULL;


struct node* createNode(int val)
{
	struct node *new = (struct node *)malloc(sizeof(Node));
	new->data = val;
	new->next = NULL;
	return new;
}

Node* createList(int val)
{
	struct node *new=createNode(val);
	if(head==NULL)
		head=new;
	else
		last->next=new;
	last = new;
	return head;
}

void displayList(struct node *temp)
{
	printf("The list is : ");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}

void insFirst(int val)
{
	struct node *new = createNode(val);
	new->next = head;
	head = new;
	if(head == NULL)
		last = new;
	displayList(head);
}
void insLast(int val)
{
	struct node *new = createNode(val);
	if(head == NULL)
		head = new;
	last->next = new;
	last = new;
	displayList(head);
}
int insBefore(int val,int key)
{
	struct node *temp=head;
	struct node *new=createNode(val);
	int flag=0;
	while(temp!=NULL)
	{
		if(temp->next->data==key)
		{	flag=1;
			break;}
		temp = temp->next;
	}
	if(flag==0)
		return -1;
	new->next=temp->next;
	temp->next=new;
	displayList(head);
	return 0;
}
int insAfter(int val,int key)
{
	struct node *temp=head;
	struct node *new=createNode(val);
	int flag=0;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{	flag=1;
			break;}
		temp = temp->next;
	}
	if(flag==0)
		return -1;
	new->next=temp->next;
	temp->next=new;
	displayList(head);
	return 0;
}
int insBetween(int val,int a,int b)
{
	struct node *temp=head;
	struct node *new=createNode(val);
	int flag=0;
	while(temp!=NULL)
	{
		if(temp->data==a && temp->next->data==b)
		{	flag=1;
			break;}
		temp = temp->next;
	}
	if(flag==0)
		return -1;
	new->next=temp->next;
	temp->next=new;
	displayList(head);
	return 0;
}
int insPos(int val, int pos)
{
	int count=1;
	struct node *temp=head;
	struct node *new=createNode(val);
	int flag=0;
	if(count==1)
	{
		insFirst(val);
		return 0;
	}
	while(temp!=NULL)
	{
		if(count==(pos-1))
		{	
			flag=1;
			break;
		}
		temp = temp->next;
		count++;
	}
	if(flag==0)
		return -1;
	new->next=temp->next;
	temp->next=new;
	displayList(head);
	return 0;
}
void delFirst()
{
	struct node *del = head;
	head=head->next;
	if(head == NULL)
		last = NULL;
	printf("Deleted: %d\n",del->data);
	free(del);
	displayList(head);
}
void delLast()
{
	Node *temp = head;
	Node *del = last;
	if(head == NULL)
	{	printf("UNDERFLOW!");
		exit(0);
	}
	while(temp->next->next!=NULL)
		temp=temp->next;
	last = temp;
	last->next=NULL;
	printf("Deleted: %d\n",del->data);
	free(del);
	displayList(head);
}
void delAfter(int a)
{
	Node *temp=head;
	Node *del;
	if(head == NULL)
	{	printf("UNDERFLOW!");
		exit(0);
	}
	while(temp->data!=a)
		temp=temp->next;
	if(temp->next == NULL)
		printf("No node after.");
	else{
		del=temp->next;
		temp->next = temp->next->next;
		printf("Deleted: %d\n",del->data);
		free(del);
		displayList(head);
	}
}
void delBefore(int a)
{
	Node *temp=head;
	Node *del;
	if(head == NULL)
	{	printf("UNDERFLOW!");
		exit(0);
	}
	while(temp->next->next->data!=a)
		temp=temp->next;
	if(temp == NULL)
		printf("Node not found.");
	else
	{
		del=temp->next;
		temp->next = temp->next->next;
		printf("Deleted: %d\n",del->data);
		free(del);
		displayList(head);
	}
}
void delBetween(int a,int b)
{
	Node *temp=head;
	Node *del;
	if(head == NULL)
	{	printf("UNDERFLOW!");
		exit(0);
	}
	while(temp->data!=a || temp->next->next->data!=b)
		temp=temp->next;
	if(temp == NULL)
		printf("Nodes not found.");
	else
	{
		del=temp->next;
		temp->next = temp->next->next;
		printf("Deleted: %d\n",del->data);
		free(del);
		displayList(head);
	}
}
void delPos(int pos)
{
	int count = 1;
	Node *temp=head;
	Node *del;
	if(head == NULL)
	{	printf("UNDERFLOW!");
		exit(0);
	}
	while(count!=pos-1){
		count++;
		temp=temp->next;
	}
	if(temp == NULL)
		printf("Nodes not found.");
	else
	{
		del=temp->next;
		temp->next = temp->next->next;
		printf("Deleted: %d\n",del->data);
		free(del);
		displayList(head);
	}
}

void main()
{
	char ch='y';
	int opt,val,key,pos,ret,a,b,count=0;
	printf("Enter:\n1. Create a singly linked list\n2. display the list\n3. insert a node as the first node\n4. insert a node as the last node\n5. insert a node after agiven node\n6. insert a node before a given node\n7. insert a node between 2 nodes\n8. insert a node in a given position\n9. delete the first node\n10. delete the last node\n11. delete a node after a given node\n12. delete a node before a given node\n13. delete a node between 2 nodes\n14. delete a node in a given position");
	do
	{
		printf("\nEnter your option:");
		scanf("%d",&opt);
		switch (opt)
		{
			case 1:
				int n;
				printf("Enter number of nodes:");
				scanf("%d",&n);
				for(int i=0;i<n;i++){
					printf("Enter a value:");
					scanf("%d",&val);
					head = createList(val);
				}
				break;
			case 2:
				displayList(head);
				break;
			case 3:
				printf("Enter a value:");
				scanf("%d",&val);
				insFirst(val);
				break;
			case 4:
				printf("Enter a value:");
				scanf("%d",&val);
				insLast(val);
				break;
			case 5:
				printf("Enter a value:");
				scanf("%d",&val);
				printf("Enter a key:");
				scanf("%d",&a);
				ret=insAfter(val,a);
				if(ret<0)
					printf("Key not found!!");
				break;
			case 6:
				printf("Enter a value:");
				scanf("%d",&val);
				printf("Enter a key:");
				scanf("%d",&a);
				ret=insBefore(val,a);
				if(ret<0)
					printf("Key not found!!");
				break;
			case 7:
				printf("Enter a value:");
				scanf("%d",&val);
				printf("Enter First key:");
				scanf("%d",&a);
				printf("Enter Second key:");
				scanf("%d",&b);
				ret=insBetween(val,a,b);
				if(ret<0)
					printf("Key not found!!");
				break;
			case 8:
				printf("Enter a value:");
				scanf("%d",&val);
				printf("Enter a position:");
				scanf("%d",&pos);
				ret=insPos(val,pos);
				if(ret<0)
					printf("Invalid Position!!");
				break;
			case 9:
				delFirst();
				break;
			case 10:
				delLast();
				break;
			case 11:
				printf("Enter a key:");
				scanf("%d",&a);
				delAfter(a);
				break;
			case 12:
				printf("Enter a key:");
				scanf("%d",&a);
				delBefore(a);
				break;
			case 13:
				printf("Enter First key:");
				scanf("%d",&a);
				printf("Enter Second key:");
				scanf("%d",&b);
				delBetween(a,b);
				break;
			case 14:
				printf("Enter a position:");
				scanf("%d",&pos);
				delPos(pos);
				break;
			default:
				printf("Invalid option!!\n");
		}
		printf("Do you want to continue?(y/n):");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
}
