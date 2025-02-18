#include <stdio.h> #include <stdlib.h>

struct Node { int data;
struct Node* next;
};

struct Node* front = NULL; struct Node* rear = NULL;

// Function to enqueue an element into the queue 
void enqueue(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); newNode->data = data;
newNode->next = NULL; if (rear == NULL) {
front = rear = newNode;
} else {
rear->next = newNode; rear = newNode;
}
printf("Enqueued %d into the queue.\n", data);
}

// Function to dequeue an element from the queue 
  void dequeue() {
if (front == NULL) {
printf("Queue is empty. Cannot dequeue.\n");
} else {
struct Node* temp = front; front = front->next;
if (front == NULL) { rear = NULL;
}
printf("Dequeued %d from the queue.\n", temp->data); free(temp);
}
}

// Function to display the elements in the queue
 

void display() {
if (front == NULL) { printf("Queue is empty.\n");
} else {
struct Node* temp = front; printf("Queue elements: "); while (temp != NULL) {
printf("%d ", temp->data); temp = temp->next;
}
printf("\n");
}
}

int main() {
int choice, data;

while (1) {
printf("\nQueue Operations:\n");
printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n"); printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice) { case 1:
printf("Enter the element to enqueue into the queue: "); scanf("%d", &data);
enqueue(data); break;
case 2:
dequeue(); break;
case 3:
display(); break;
case 4:
return 0; default:
printf("Invalid choice. Try again.\n");
}
}
return 0;
}
