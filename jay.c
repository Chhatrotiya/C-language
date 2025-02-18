#include<stdio.h>
int main()
{
    
float a,b,c; 
char input;
while (1)
{
printf("enter q for quitting the programm\n 1.area of squar\n 2.perimeter of squar\n 3.area of rectangle\n 4.perimeter of rectangle\n");
scanf("%c",&input);
switch (input)
{
case 'q':
   printf("quitting the program......");
 goto end;
    break;
    case '1':
    printf("enter the side of squar");
    scanf("%f",&a);
    float d=a*a;
    printf("area of squar is %f\n",d);
    break;
case '2':
 printf("enter the side of squar");
    scanf("%f",&a);
    float e=2*a;
    printf("area of squar is %f\n",e);
    break;

    case '3':
    printf("enter the length of rectangle\n");
    scanf("%f",&b);
    printf("enter the hight of rectangle\n");
    scanf("%f",&c);
    float f=b*c;
    printf("area of squar is %f\n",f);
    break;
    case '4':
    printf("enter the length of rectangle\n");
    scanf("%f",&b);
    printf("enter the hight of rectangle\n");
    scanf("%f",&c);
    float g=2*b+2*c;
    printf("area of squar is %f\n",g);
    break;



default:
printf("it is in default");
    break;
}

}
end:
return 0;
    
}

    

    
    