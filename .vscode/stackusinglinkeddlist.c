#include <stdio.h> #include <stdlib.h>

struct Node { int data;
struct Node* next;
};

struct Node* top = NULL;

// Function to push an element onto the stack 
void push(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); newNode->data = data;
newNode->next = top; top = newNode;
printf("Pushed %d onto the stack.\n", data);
}

// Function to pop an element from the stack
 void pop() {
if (top == NULL) {
printf("Stack is empty. Cannot pop.\n");
} else {
struct Node* temp = top; top = top->next;
printf("Popped %d from the stack.\n", temp->data); free(temp);
}
}

// Function to display the elements in the stack 
void display() {
if (top == NULL) { printf("Stack is empty.\n");
} else {
struct Node* temp = top; printf("Stack elements: "); while (temp != NULL) {
printf("%d ", temp->data); temp = temp->next;
}
printf("\n");
}
}
 


int main() {
int choice, data;

while (1) {
printf("\nStack Operations:\n");
printf("1. Push\n2. Pop\n3. Display\n4. Exit\n"); printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice) { case 1:
printf("Enter the element to push onto the stack: "); scanf("%d", &data);
push(data); break;
case 2:
pop(); break;
case 3:
display(); break;
case 4:
return 0; default:
printf("Invalid choice. Try again.\n");
}
}
return 0;
}
