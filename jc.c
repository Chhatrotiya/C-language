#include<stdio.h>
int sum(int a,int b); 
void editnumber()
{
  int g;
  printf("enter the number which you may change");
  scanf("%d",&g);
  printf("your edited number is %d\n",g);
}
int takenumber()
{
  int j;
  printf("take a number");
  scanf("%d",&j);
  printf("the number is %d",j);
}
void printstar(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%c\n",'*');
  }
  
}
int sum(int a, int b)
{
  return a-b;
}
int main()
{
  int a,c,b;
  a=3;
  b=5;
  c=sum(a,b); 
  editnumber();
  takenumber();
  printstar(7);
  printf("the  sum is %d\n",c);
  return 0;
}