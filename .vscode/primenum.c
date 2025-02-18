#include<stdio.h>
int p(int);
void main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
  if (p(n)==0  )
  {
     printf("enterd number is not prime");
  }
  else{
 printf("entered number is prime");
    }
  
  
}
int p(int n)
{
  for ( int i =2; i <n; i++)
  {
    if (n%i==0)
    {
        return 0;
      
    }
   
}
 
        return 1;
}