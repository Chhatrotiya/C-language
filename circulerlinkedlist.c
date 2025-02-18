#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};
typedef struct node node;
node *start = NULL;
node *last = NULL;
int count = 0;
void traverse(node *);
node *createlist(node *);
node *in_beg(node *);
node *in_end(node *);
node *in_asn(node *);
node *in_bsn(node *);
node *del_beg(node *);
node *del_end(node *);
node *del_sp(node *);
node *search(node *);
void main()
{
    int c;
    do
    {
        printf("\nmanu for operation:\n");
        printf("1.createlist\n");
        printf("2.insert node at bigining\n");
        printf("3.insert  node at the end\n");
        printf("4.insert node after specific node\n");
        printf("5.insert node before specific node\n");
        printf("6.delete node at bigining\n");
        printf("7.delete node at end\n");
        printf("8.delete specific node\n");
        printf("9.traverse\n10.count\n11.search\n12.exit\n");

        scanf("%d", &c);
        switch (c)
        {
        case 1:
            start = createlist(start);
            break;
        case 2:
            start = in_beg(start);
            break;
        case 3:
            start = in_end(start);
            break;
        case 4:
            start = in_asn(start);
            break;
        case 5:
            start = in_bsn(start);
            break;
        case 6:
            start = del_beg(start);
            break;
        case 7:
            start = del_end(start);
            break;
        case 8:
            start = del_sp(start);
            break;
        case 9:
            printf("now element is:");
            traverse(start);
            break;
        case 10:
            printf("totle elrement is:%d", count);
            break;
        case 11:
            start = search(start);
            break;
        default:
            break;
        }
    } while (c != 12);
}
node *createlist(node *head)
{
    // node *first;
    // node *second;
    // node *third;

    // first = (node *)malloc(sizeof(node));
    // second = (node *)malloc(sizeof(node));
    // third = (node *)malloc(sizeof(node));
    // if (start == NULL)
    // {
    //     head = first;
    //     printf("enter the value of first element:");
    //     scanf("%d", &first->val);
    //     last = first;
    //     count++;
    //     first->next = second;
    //     printf("enter the value of second element:");
    //     scanf("%d", &second->val);
    //     second->next = third;
    //     last = second;
    //     count++;
    //     printf("enter the value of third element:");
    //     scanf("%d", &third->val);
    //     count++;
    //     last = third;
    //     third->next = head;
    // }
      node* no;
        int n;
    printf ("how many number you want to enter\n");
    scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            printf("enter %d element\n",i+1);
            no=(node *)malloc(sizeof(node));
           scanf("%d",&no->val);
           if (i==0)
           {
            no->next=no;
            last=no;
            head=no;
           }
           else
        {
            no->next=head;
            last->next=no;
            last=no;
        }
        }
    return head;
}
void traverse(node *start)
{
    node *ptr;
    ptr = start;
    if (start == NULL)
    {
        printf("list is empty");
        exit(0);
    }
    // while (ptr!=start)
    // {
    //     printf("%d  ", ptr->val);
    //     ptr = ptr->next;
    // }
    // printf("%d\n",ptr->val);
    do
    {
        printf("%d  ", ptr->val);
        ptr = ptr->next;
    } while (ptr != start);
}
node *in_beg(node *start)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    printf("enter the number you want to insert\n");
    scanf("%d", &ptr->val);
    if (start == NULL)
    {
        ptr->next = ptr;
        last = ptr;
        start = ptr;
    }
    else
    {
        ptr->next = start;
        last->next = ptr;
        start = ptr;
    }
    count++;
    return start;
}
node *in_end(node *satrt)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    printf("enter the number you want to insert");
    scanf("%d", &ptr->val);
    if (start == NULL)
    {
        ptr->next = ptr;
        last = ptr;
        start = ptr;
    }
    else
    {
        ptr->next = last->next;
        last->next = ptr;
        last = ptr;
    }
    count++;
    return start;
}
node *in_asn(node *start)
{
    node *ptr, *preptr, *newnode;
    newnode = (node *)malloc(sizeof(node));
    int num;
    printf("enter the referance number\n");
    scanf("%d", &num);
    printf("enter the number you want to insert\n");
    scanf("%d", &newnode->val);
    ptr = start, preptr = ptr;
    while (preptr->val != num)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    newnode->next = ptr;
    preptr->next = newnode;
    count++;
    return start;
}
node *in_bsn(node *start)
{
    node *ptr, *preptr, *newnode;
    newnode = (node *)malloc(sizeof(node));
    int num;
    printf("enter the referance number\n");
    scanf("%d", &num);
    printf("enter the number you want to insert\n");
    scanf("%d", &newnode->val);
    if (ptr==start)
    {
        
    }
    ptr = start, preptr = ptr;
    while (ptr->val != num)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    newnode->next = ptr;
    preptr->next = newnode;
    count++;
    return start;
}
node *del_beg(node *start)
{
    node *ptr;
    if (start == NULL)
    {
        printf("underflow\n");
        exit(0);
    }
    else if (last->next == last)
    {
        free(last);
        start = NULL;
        last = start;
    }
    else
    {
        ptr = start;
        start = ptr->next;
        last->next = ptr->next;
        free(ptr);
    }
    count--;
    return start;
}
node *del_end(node *start)
{
    node *ptr;
    if (start == NULL)
    {
        printf("underflow\n");
        exit(0);
    }
    else if (start == last)
    {
        free(last);
        last = NULL;
        start = NULL;
    }
    else
    {
        ptr = start;
        while (ptr->next != last)
        {
            ptr = ptr->next;
        }
        ptr->next = start;
        free(last);
        last = ptr;
    }
    count--;
    return start;
}
node *del_sp(node *start)
{
    node *ptr, *preptr;
    int num;
    printf("enter the value you want to delete");
    scanf("%d", &num);
    ptr = start;
    preptr = ptr;
    while (ptr->val != num)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    count--;
    return start;
}
node *search(node *start)
{
    node *p;
    p = start;
    int n;
    printf("enter the number you want search in linked list\n");
    scanf("%d", &n);
    if (start == NULL)
    {
        printf("link is empty\n");
    }
    else
    {
        while ((p->val != n) && (p->next != start))
        {
            p = p->next;
        }
        if (p->val == n)
        {
            printf("%d is exists in list\n", n);
        }
        else
        {
            printf("%d doesn't exists in list\n", n);
        }
    }
    return start;
}