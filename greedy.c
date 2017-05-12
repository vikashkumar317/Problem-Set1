#include<cs50.h>
#include<stdio.h>
int main()
{
    int f;float a,i,j,k,l;
    printf ("O hai!");
    do
    {
    printf ("How much change is owed\n");
     a=get_float();
     for (i=a;i>=.25;i=i-0.25)
    {
        f=f+1;
        
    }
    if (i==0)
       { printf ("%d\n",f);
        break;}
    else
    for (j=i;j>0.09;j=j-0.1)
    {
        f=f+1;
    }            
     if (j==0)
        printf ("%d\n",f);
         else
    for (k=j;k>.049;k=k-0.05)
    {
        f=f+1;
    }
     if (k==0)
        printf ("%d\n",f);
    else
    for (l=k;l>.009;l=l-0.01)
    {
        f=f+1;
    }
    printf ("%d\n",f);

    }while(a<0);
    return 0;
}