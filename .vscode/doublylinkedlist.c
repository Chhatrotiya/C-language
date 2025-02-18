#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;

// Function to create a new node 
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
// Function to insert a node at the beginning of the list
void insertAtBeginning(int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    printf("Node with data %d inserted at the beginning.\n", data);
}

// Function to insert a node at the end of the list
void insertAtEnd(int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Node with data %d inserted at the end.\n", data);
}

// Function to insert a node after a specific node
void insertAfterNode(int data, int afterData)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        printf("List is empty. Cannot insert after a specific node.\n");
        return;
    }
    struct Node *temp = head;
    while (temp != NULL && temp->data != afterData)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Node with data %d not found.\n", afterData);
    }
    else
    {
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != NULL)
        {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        printf("Node with data %d inserted after the node with data %d.\n", data, afterData);
    }
}

// Function to insert a node before a specific node
void insertBeforeNode(int data, int beforeData)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        printf("List is empty. Cannot insert before a specific node.\n");
        return;
    }
    if (head->data == beforeData)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        printf("Node with data %d inserted before the first node.\n", data);

        return;
    }
    struct Node *temp = head;
    while (temp != NULL && temp->data != beforeData)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Node with data %d not found.\n", beforeData);
    }
    else
    {

        newNode->next = temp;
        newNode->prev = temp->prev;
        temp->prev->next = newNode;
        temp->prev = newNode;
        printf("Node with data %d inserted before the node with data %d.\n", data, beforeData);
    }
}

// Function to delete a node from the beginning of the list
void deleteFromBeginning()
{
    if (head == NULL)
    {
        printf("List is empty. Cannot delete from the beginning.\n");
    }
    else
    {
        struct Node *temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(temp);
        printf("Node deleted from the beginning.\n");
    }
}

// Function to delete a node from the end of the list
void deleteFromEnd()
{
    if (head == NULL)
    {
        printf("List is empty. Cannot delete from the end.\n");
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("Node deleted from the end.\n");
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
        printf("Node deleted from the end.\n");
    }
}

// Function to delete a specific node
void deleteNode(int dataToDelete)
{
    if (head == NULL)
    {
        printf("List is empty. Cannot delete.\n");
    }
    else
    {
        struct Node *temp = head;
        while (temp != NULL && temp->data != dataToDelete)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            printf("Node with data %d not found.\n", dataToDelete);
        }
        else
        {
            if (temp->prev != NULL)
            {
                temp->prev->next = temp->next;
            }
            else
            {
                head = temp->next;
            }
            if (temp->next != NULL)
            {
                temp->next->prev = temp->prev;
            }
            free(temp);
            printf("Node with data %d deleted.\n", dataToDelete);
        }
    }
}

// Function to search for a node with specific data
void searchNode(int searchData)
{
    struct Node *temp = head;
    int position = 1;
    while (temp != NULL)
    {
        if (temp->data == searchData)
        {
            printf("Node with data %d found at position %d.\n", searchData, position);
            return;
        }
        temp = temp->next;
        position++;
    }
    printf("Node with data %d not found.\n", searchData);
}

// Function to traverse and display the linked list
void displayList()
{
    struct Node *temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to count the total number of nodes in the linked list
int countNodes()
{
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    int choice, data, afterData, beforeData, searchData;

    while (1)
    {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Insert at Beginning\n2. Insert at End\n3. Insert After Specific Node\n");
        printf("4. Insert Before Specific Node\n5. Delete from Beginning\n6. Delete from End\n");
        printf("7. Delete Specific Node\n8. Search a Node\n9. List Traversal\n10. Count Total Number of Nodes\n11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to insert at the beginning: ");
            scanf("%d", &data);
            insertAtBeginning(data);
            break;
        case 2:
            printf("Enter the element to insert at the end: ");
            scanf("%d", &data);
            insertAtEnd(data);
            break;
        case 3:
            printf("Enter the element to insert: ");
            scanf("%d", &data);
            printf("Enter the data of the node after which to insert: ");
            scanf("%d", &afterData);
            insertAfterNode(data, afterData);
            break;
        case 4:
            printf("Enter the element to insert: ");
            scanf("%d", &data);
            printf("Enter the data of the node before which to insert: ");
            scanf("%d", &beforeData);
            insertBeforeNode(data, beforeData);
            break;
        case 5:
            deleteFromBeginning();

            break;
        case 6:
            deleteFromEnd();
            break;
        case 7:
            printf("Enter the data of the node to delete: ");
            scanf("%d", &data);
            deleteNode(data);
            break;

        case 8:
            printf("Enter the data to search for: ");
            scanf("%d", &searchData);
            searchNode(searchData);
            break;
        case 9:
            displayList();
            break;
        case 10:
            printf("Total number of nodes: %d\n", countNodes());
            break;
        case 11:
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
