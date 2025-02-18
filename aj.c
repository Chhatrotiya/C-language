#include<stdio.h>
void main()
{
    int age,marks;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("age=%d\n",age);
    printf("enter your marks\n");
    scanf("%d",&marks);
    printf("marks=%d",marks);
    switch (age)
    {
    case 3:
        printf("your age is 3\n");
        
        switch (marks)
        {
        case 45:
            printf("your marks is 45");
            break;
        
        default:
        printf("your marks is not  45");
            break;
        }
        break;
    case 13:
    printf("your age is 13");
    break;

case 23:
printf("your age  is 23");
break;

    
    default:
    printf("your age is not 3,13and 23");
        break;
    }
}