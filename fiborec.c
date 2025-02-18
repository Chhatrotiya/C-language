#include <stdio.h>
int feb(int n);
void main(){
for (int i = 1; i <= 10; i++)
{
 printf("%d ", feb(i));   
}
}
int feb(int n){
    if (n == 1)
    return 0;
    if (n == 2)
    return 1;
    else
    return feb(n-1) + feb(n-2);
    
}