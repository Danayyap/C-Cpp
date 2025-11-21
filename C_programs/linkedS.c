#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void append(struct node **ptr, int d)
{
	struct node *new = (struct node*) calloc(1,sizeof(struct node));
	new->data = d;
	new->next = NULL;
	if(*ptr == NULL)
	{
		*ptr = new;
		return;
	}
	struct node *tmp = *ptr;
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}
void print(struct node *head)
{	
	struct node *tmp = head;
	while(tmp != NULL)
	{
		printf("%d ->",tmp->data);
		tmp = tmp->next;

	}
}
int main()
{
	struct node *head = NULL;
	append(&head,10);
	append(&head,20);
	append(&head,30);
	append(&head,40);
	append(&head,50);

	print(head);
	return 1;
}

