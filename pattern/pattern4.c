#include<stdio.h>
int main ()
{
   int m,l,n; 
   printf("enter value of l:");
   scanf("%d",&l);

   for(n=1;n<=10;n++)
       {m=n*l;
        printf("%d*%d =%d",l,n,m);
          
        printf("\n");
      }
}    

