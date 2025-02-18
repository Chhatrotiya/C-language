#include <stdio.h>
#include <stdlib.h>
#define max 50
int rear = -1, front = -1;
int que[max];
void insert();
void display();
int peek();
void delete();
void main()
{
    int val, c;
    do
    {
        printf("\nenter the number for operation:\n");
        printf("1.insert element\n");
        printf("2.delete element\n");
        printf("3.peek\n");
        printf("4.display queue\n");
        printf("5.exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert();
            break;
        case 2:
         delete ();
            break;
        case 3:
            val = peek();
            printf("the first value of queue  is:%d\n", val);
            break;
        case 4:
            display();
            break;
        default:
            break;
        }
    } while (c != 5);
}
void insert()
{
    int num;
    printf("enter the number you want to enter in queue:\n");
    scanf("%d", &num);
    if (rear >= max - 1)
    {
        printf("queue overflow\n");
        exit(0);
    }
    if (rear == -1 && front == -1)
    {
         front = rear = 0;
         que[rear]=num; 
    }
    else
    {
        rear++;
      que[rear]=num;
    }
}
void delete()
{
    int val;
    if (front == -1 || front > rear)
    {
        printf("queue underflow\n");
        exit(0);
    }
    else
    {
         
        val = que[front];
        front++;
       printf("deleted element is:%d\n",val);
    }
}
int peek()
{
    if (rear == -1 || front > rear)
    {
        printf("queue underflow\n");
        exit(0);
    }
    else
    {
        return que[rear];
    }
}
void display()
{
    int i;
    printf("now queue is :\n");
    for (i = front; i <= rear; i++)
    {
        printf("%d\n", que[i]);
    }
}