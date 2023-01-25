#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    head = temp;
}

void delete(int data) {
    struct Node* temp = head;
    if (temp != NULL && temp->data == data) {
        head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != data) {
        temp = temp->next;
    }
    if (temp == NULL) return;
    struct Node* next = temp->next;
    free(temp);
}

void print() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    printf("Original list: ");
    print();
    delete(3);
    printf("List after deleting 3: ");
    print();
    return 0;
}
