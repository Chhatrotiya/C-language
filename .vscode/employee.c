#include<stdio.h>
struct emp
{
    char name[20];
    float basic,da,tot,hra,ta,net;
};
void main()
{
    struct emp p[50];
    int i,n;
    printf("enter the number of employee\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
   printf("enter the employee name:\n");
   scanf("%s",p[i].name);
   printf("enter the basic of employee\n");
   scanf("%f",&p[i].basic);
   p[i].da=p[i].basic*(0.5);
   p[i].hra=p[i].basic*(0.15);
   p[i].ta=400;
   p[i].tot=p[i].basic+p[i].da+p[i].hra+p[i].ta;
   p[i].net=p[i].tot- p[i].tot*(0.05);

    }
    printf("name\tbasic\tda\thra\tta\ttotle\t\tnet\t\n");
    for ( i = 0; i < n; i++)
    {
        printf("%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t\n",p[i].name,p[i].basic,p[i].da,p[i].hra, p[i].ta,p[i].tot,p[i].net);
    }

    
}