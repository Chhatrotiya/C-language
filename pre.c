#include<stdio.h>
int main()
{
    int marks[2][5]= {{63,33,44,99,11},
                      {11,55,66,12,56}};
    for ( int i = 0; i < 2; i++)
    { 
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t",marks[i][j]);
            
    }  
     printf("\n");
        }
       
        
      
    
  
    return 0;
}