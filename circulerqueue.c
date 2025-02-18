#include<stdio.h>
#include<stdlib.h>
#define max 5
int front=-1,rear=-1;
int que[max];
void insert();
void delete();
void traverse();
void main(){
    int c;
    do
    {
    printf("enter the number for operation:\n");
    printf("1.insert\n");
    printf("2.delete\n");
    printf("3.traverse\n");
    printf("4.exit\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
       insert();
        break;
        case 2:
       delete();
        break;
        case 3:
       traverse();
        break;
    
    default:
        break;
    }
    } while (c!=4);
    
}
void insert()
{
    int num;
    printf("enter the number you want to insert:\n");
    scanf("%d",&num);
    if (front==(rear+1)%max)
    {
        printf("queue overflow\n");
        exit(0);
    }
    else if (front==-1 && rear==-1)
    {
        front++;
        rear++;
        que[rear]=num;
    }
   else
   {
    rear=(rear+1)%max;
    que[rear]=num;
   } 
    
}
void delete()
{
    int n;
    if(front==-1)
    {
        printf("queue is empty\n");
        exit(0);
    }
    else if (front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        n=que[front];
        printf("deleted element is %d\n",n);
        front=(front+1)%max;
    }
}
void traverse()
{

    // for ( int i = front; i!=(rear+1)%max; i=(i+1)%max)
    // {
    //     printf("%d  \n",que[i]);
    // }
  if (front>rear)
    {
        for (int i =front; i <max; i++)
        {
            printf("%d\n",que[i]);
        }
       for (int i = 0; i <=rear; i++)
       {
        printf("%d\n",que[i]);
       }
        
    }
    else{
        for (int i =front; i <=rear; i++)
        {
            printf("%d\n",que[i]);
        }
        
    }
    
}