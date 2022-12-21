#include <stdio.h>
#include <stdlib.h>
void push();//definining the various functions to be performed
void pop();
void display();

struct node//creating a linking node
{
	int val;
	struct node *next;
};
struct node *head;


void push()
{
	int val;
	struct node *ptr = (struct node*)malloc(sizeof(struct node));//dynamically allocating size
	if (ptr == NULL)//node has not been created
	{
		printf("Not abkle to push the element\n");
	}
	else
	{
		printf("Enter the value\n");
		scanf("%d", &val);
		if (head == NULL)//pushing element in the node
		{
			ptr->val = val;
			ptr->next = NULL;
			head = ptr;
		}
		else
		{
			ptr->val = val;
			ptr->next = head;
			head = ptr;
		}
		printf("Item pushed\n");
	}
}

void pop()
{
	int item;
	struct node *ptr;
	if (head == NULL)//checking for undeflow condition
	{
		printf("Underflow\n");
	}
	else
	{
		item = head-> val;
		ptr = head;
		head = head->next;
		free(ptr);//item is freed from the node
		printf("Item popped %d\n", item);
	}
}

void display()
{
	struct node *ptr;
	ptr = head;
	if(ptr == NULL)//checking for underflow condition
	{
		printf("Stack Underflow\n");
	}
	else
	{
		printf("Printing stack element: \n");
		while(ptr != NULL)//printing the values in the list
		{
			printf("%d\t", ptr->val);
			printf("\n");
			ptr= ptr->next;
		}
	}
}

int main()
{
	int choice;
	while(1)
	{
		printf("Select the operation\n");
		printf(" 1. Push\n 2. Pop\n 3. Display\n 4. Exit\n");
		scanf("%d", &choice);
		switch(choice)//multiple functions performed by this code
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: exit(0);
			default: printf("Invalid choice\n");
			
		}
	}
}

