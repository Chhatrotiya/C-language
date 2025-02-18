#include<stdio.h> 
int fectorial(int number)
{
    if (number==0 || number==1)
    {
       return 1;
    }
    else 
    {
       return (number*fectorial(number-1));
    }
    
}
void main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("fectorial of %d is %d\n",num,fectorial(num));
}