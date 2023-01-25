#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE], front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX_SIZE - 1)
        printf("\nQueue is Full!!");
    else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue is Empty!!");
        return;
    } else {
        printf("\nDequeued value : %d", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear)
        printf("\nQueue is Empty!!");
    else {
        int i;
        printf("\nQueue elements are : ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    dequeue();

    display();

    return 0;
}
