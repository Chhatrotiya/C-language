#include<stdio.h>
#include<stdlib.h>
struct node
{
int val;
struct node *pre;
struct node *next;
};
typedef struct node node;
node *start=NULL;
node * createlist(node*);
