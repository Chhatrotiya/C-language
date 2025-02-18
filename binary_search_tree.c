#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *left;
    int val;
    struct node *right;
};
typedef struct node node;
node *tree;
node *insertnode(node *, int);
void preorder(node *);
void inorder(node *);
void postorder(node *);
node *smallest(node *);
node *largest(node *);
node *delete(node *, int);
int totlenode(node *);
int internalnodes(node *);
int externalnodes(node *);
int hight(node*);
void main()
{
    int n;
    int val;
    node *ptr;
    int i;
    do
    {
        printf("enter the choice for operation\n");
        printf("1.insert node\n");
        printf("2. preorder traversal\n");
        printf("3.inorder traversal\n");
        printf("4.postorder traversal\n");
        printf("5.find the smallest element\n");
        printf("6.find the largest element \n");
        printf("7.delete node\n");
        printf("8.find totle node in tree\n");
        printf("9.fine the totle number of internal nodes\n");
        printf("10.find the totle number of external nodes\n");
        printf("11.find the hight of tree\n");
        printf("12.exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("enter the value you want to insert in the binary search tree\n");
            scanf("%d", &val);
            tree = insertnode(tree, val);
            break;
        case 2:
            preorder(tree);
            break;
        case 3:
            inorder(tree);
            break;
        case 4:
            postorder(tree);
            break;
        case 5:
            ptr = smallest(tree);
            printf("smallest element is: %d\n", ptr->val);
            break;
        case 6:
            ptr = largest(tree);
            printf("largest element is : %d\n", ptr->val);
            break;
        case 7:
            printf("enterr the valu you want to delet from the tree\n");
            scanf("%d", &val);
            tree = delete (tree, val);
            break;
        case 8:
            i = totlenode(tree);
            printf("the number of totle node in tree is %d\n", i);
            break;
        case 9:
            i = internalnodes(tree);
            printf("the totle number of internal nodes is %d \n", i);
            break;
        case 10:
            i = externalnodes(tree);
            printf("the totle number of external nodes is %d\n", i);
            break;
        case 11:
            i = hight(tree);
            printf("hight of the tree is %d\n", i);
            break;
        default:
            break;
        }
    } while (n != 12);
}
node *insertnode(node *tree, int val)
{
    node *ptr, *p, *nod;
    ptr = (node *)malloc(sizeof(node));
    ptr->val = val;
    ptr->left = NULL;
    ptr->right = NULL;
    if (tree == NULL)
    {
        tree = ptr;
        tree->left = NULL;
        tree->right = NULL;
    }
    else
    {
        p = NULL;
        nod = tree;
        while (nod != NULL)
        {
            p = nod;
            if (val < nod->val)
            {
                nod = nod->left;
            }
            else
            {
                nod = nod->right;
            }
        }
        if (val < p->val)
        {
            p->left = ptr;
        }
        else
        {
            p->right = ptr;
        }
    }
    return tree;
}
void preorder(node *tree)
{
    if (tree != NULL)
    {
        printf("%d  ", tree->val);
        preorder(tree->left);
        preorder(tree->right);
    }
}
void inorder(node *tree)
{
    if (tree != NULL)
    {
        inorder(tree->left);
        printf("%d  ", tree->val);
        inorder(tree->right);
    }
}
void postorder(node *tree)
{
    if (tree != NULL)
    {
        postorder(tree->left);
        postorder(tree->right);
        printf("%d  ", tree->val);
    }
}
node *smallest(node *tree)
{
    if (tree == NULL || tree->left == NULL)
    {
        return tree;
    }
    else
    {
        return smallest(tree->left);
    }
}
node *largest(node *tree)
{
    if (tree == NULL || tree->right == NULL)
    {
        return tree;
    }
    else
    {
        return largest(tree->right);
    }
}
node *delete(node *tree, int val)
{
    node *ptr;
    if (tree == NULL)
    {
        printf("%d is not present in the tree\n", val);
    }
    else if (val < tree->val)
    {
       tree->left= delete (tree->left, val);
    }
    else if (val > tree->val)
    {
       tree->right= delete (tree->right, val);
    }
    else
    {
        if (tree->left && tree->right)
        {
            ptr = largest(tree->left);
            tree->val = ptr->val;
            tree->left=delete (tree->left, ptr->val);
        }
        else
        {
            ptr = tree;
            if (tree->left == NULL && tree->right == NULL)
            {
                tree = NULL;
            }
            else if (tree->left != NULL)
            {
                tree = tree->left;
            }
            else
            {
                tree = tree->right;
            }
            free(ptr);
        }
    }
    return tree;
}
int totlenode(node *tree)
{
    if (tree == NULL)
    {
        return 0;
    }
    else
    {
        return totlenode(tree->left) + totlenode(tree->right) + 1;
    }
}
int internalnodes(node *tree)
{
    if (tree == NULL)
    {
        return 0;
    }
    if (tree->left == NULL && tree->right == NULL)
    {
        return 0;
    }
    else
    {
        return internalnodes(tree->left) + internalnodes(tree->right) + 1;
    }
}
int externalnodes(node *tree)
{
    if (tree == NULL)
    {
        return 0;
    }
    if (tree->left == NULL && tree->right == NULL)
    {
        return 1;
    }
    else
    {
        return externalnodes(tree->left) + externalnodes(tree->right);
    }
}
int hight(node *tree)
{
    int left, right;
    if (tree == NULL)
    {
        return 0;
    }
    else
    {
        left = hight(tree->left);
        right = hight(tree->right);
        if (left > right)
        {
            return (left + 1);
        }
        else
        {
            return (right + 1);
        }
    }
}