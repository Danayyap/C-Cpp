#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *prv;
	struct node *nxt;
};
struct node * create_node(int value)
{
	struct node *tmp = (struct node*) malloc(sizeof(struct node));
	tmp->data = value;
	tmp->prv = NULL;
	tmp->nxt = NULL;
	
	return tmp;
}
void append(struct node **head,int d)
{
	struct node *new = create_node(d);
	if(*head == NULL)
	{
		*head = new;
		return ;
	}
	struct node *tmp = *head;
	while(tmp->nxt != NULL)
	{
		tmp = tmp->nxt;
	}
		tmp->nxt = new;
		new->prv = tmp;
}
void print(struct node *tmp)
{
	while(tmp != NULL)
	{
		printf("%d->",tmp->data);
		tmp = tmp->nxt;
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
	append(&head,60);
	append(&head,70);

	print(head);
}
