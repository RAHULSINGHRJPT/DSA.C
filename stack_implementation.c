#include <stdio.h>
#include <stdlib.h>
#define size 4//defining max size

int top = -1;//initializing the top to -1
int arr[size];
void push();//defining all the functions we will be using
void pop();
void display();
int main()
{
	int choice;
	while(1)
	{
		printf("\nSelect the operation\n");
		printf("-----------------------------\n");
		printf(" 1. Push\n 2. Pop\n 3. Display\n 4. Exit\n");
		scanf("%d", &choice);
		switch (choice)//defining all the cases we are doing
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: exit(0);
			default: printf("Invalid choice\n");
			
		}
			
	}
}

void push()
{
	int n;
	if (top == size-1)//checkig for overflow condition
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("Enter the element to be inserted\n");
		scanf("%d", &n);
		top++;
		arr[top] = n;
	}
}

void pop()
{
	if(top == -1)
	{
		printf("Stack underflow\n");//checking for underflow conditon 
	}
	else
	{
		printf("Removed element is %d\n", arr[top]);//deletion element
		top--;
	}
}

void display()
{
	if (top == -1)
	{
		printf("Stack underflow\n");//checking underflow condition
	}
	else
	{
		printf("Elements in the stack are:\n");
		for (int i = top; i >= 0; i--)//printing all elements in the stack
		{
		printf("%d\t", arr[i]);
		}
		printf("\n");
	}
}

