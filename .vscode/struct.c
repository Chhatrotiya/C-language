#include<stdio.h>

struct book
{
  int id;
  char title[20];
  float price;
};
struct book input()
{
    struct book b;
    printf("enter the book id ,book tittle and price");
    scanf("%d",&b.id);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
    return b;
}
void display(struct book b)
{
    printf("book id =%d\n tittle=%s\n book price=%.2f",b.id,b.title,b.price);
}
void main()
{
    struct book b1;
    b1=input();
    display(b1);
}
