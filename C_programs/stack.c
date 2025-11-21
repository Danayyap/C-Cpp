#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top = NULL;
void push(int d)
{
	struct node *new = (struct node *) calloc(1,sizeof(struct node));
	new->data = d;
	new->next = top;
	top = new;
	printf("%d is Pushed\n",new->data);	
}
void pop()
{
	struct node *tmp = top;
	if(top == NULL)
	{
		printf("stack is Underflow\n");
	}
	printf("Popped: %d\n",tmp->data);
	top = tmp->next;
	free(tmp);
}
void display()
{
	struct node *tmp = top;
	while(tmp != NULL)
	{
		printf("%d ->",tmp->data);
		tmp = tmp->next;
	}
}
void peek()
{
	if(top != NULL)
	{
		printf("Top Element :%d\n",top->data);
	}
	else
	{
		printf("Stack is Empty\n");
	}
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	peek();
	pop();
	display();

	return 1;

}
