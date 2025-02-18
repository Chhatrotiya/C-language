#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};
typedef struct node node;
node *start=NULL;
int count=0;
void traverse(node *);
node *createlist(node *);
node *in_beg(node *);
node *in_end(node *);
node* in_asn(node*);
node* in_bsn(node*);
node* del_big(node*);
node* del_end(node*);
node* del_sp(node*);
node* search( node*);
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
            start=in_bsn(start);
            break;
        case 6:
            start=del_big(start);
            break;
        case 7:
        start=del_end(start);
        break;
        case 8:
        start=del_sp(start);
        break;
        case 9:
            printf("now element is:");
            traverse(start);
            break;
        case 10:
        printf("totle elrement is:%d",count);
        break;
        case 11:
        start=search(start);
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

    // head = first;
    // printf("enter the value of first element:");
    // scanf("%d", &first->val);
    // count++;
    // first->next = second;
    // printf("enter the value of second element:");
    // scanf("%d", &second->val);
    // second->next = third;
    // count++;
    // printf("enter the value of third element:");
    // scanf("%d", &third->val);
    // count++;
    // third->next = NULL;
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
            no->next=NULL;
            head=no;
           }
           else
        {
            node *ptr;
            ptr=head;
            while (ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
           no->next=NULL;
           ptr->next=no; 
        }
        }
    return head;
}

void traverse(node *start)
{
    if (start==NULL)
    {
        printf("list is empty");
        exit (0);
    }
    
    while (start != NULL)
    {
        printf("%d  ", start->val);
        start = start->next;
    }
}
node *in_beg(node *start)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    printf("enter you the number you want to insert\n");
    scanf("%d", &ptr->val);
    if (start == NULL)
    {
        ptr->next = NULL;
    }
    else
    {
        ptr->next = start;
    }
    start = ptr;
    count++;
    return start;
}
node *in_end(node *start)
{
    node *ptr, *temp;
    ptr = (node *)malloc(sizeof(node));
    printf("entr the number you want to insert\n");
    scanf("%d", &ptr->val);
    if (start == NULL)
    {
        ptr->next = NULL;
        start = ptr;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        ptr->next = NULL;
        temp->next = ptr;
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
node* in_bsn(node*start)
{
     node *ptr, *preptr, *newnode;
    newnode = (node *)malloc(sizeof(node));
    int num;
    printf("enter the referance number\n");
    scanf("%d", &num);
    printf("enter the number you want to insert\n");
    scanf("%d", &newnode->val);
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
node* del_big(node*start)
{
    if(start==NULL)
    {
        printf("underflow\n");
        exit (0);
    }
    node *ptr;
ptr=start;
start=ptr->next;
free(ptr);
count--;
return start;
}
node* del_end(node*start)
{
    node *ptr,*preptr;
    ptr=start;
    preptr=ptr;
    while (ptr->next!=NULL)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    count--;
    return start;
}
node* del_sp(node*start)
{
    node *ptr,*preptr;
    int num;
    printf("enter the value you want to delete");
    scanf("%d",&num);
    ptr=start;
    preptr=ptr;
    while (ptr->val!=num)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
    count--;
    return start;
}
node* search(node* start)
{
    node*  p;
    p=start;
    int n;
    printf("enter the number you want search in linked list\n");
    scanf("%d",&n);
    if (start==NULL)
    {
        printf("link is empty\n");
    }
    else
    {
        while ((p->val!=n) && (p->next!=NULL))
        {
          p=p->next;  
        }
        if (p->val==n)
        {
           printf("%d is exists in list\n",n);
        }
        else
        {
            printf("%d doesn't exists in list\n",n);
        } 
    }
    return start;
}