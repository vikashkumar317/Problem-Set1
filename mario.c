#include<cs50.h>
#include<stdio.h>
int main()
{int n,i,j,k;
    
   do
   {
     printf ("Height: ");
     n=get_int();
      
   }while(!(n >=0 && n<=23));
    
    
    
    
   
    for (i=n;i>=1;i--)
    {
        for ( j=i;j>1;j--)
        {
            printf (" ");
        }
        for ( k=i;k<=n+1;k++)
        {
            printf ("#");
            
        }
        printf ("\n");
    }
    
    return 0;
}