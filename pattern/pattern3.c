#include<stdio.h>
int main ()
{
    int i,j;
    for (i=5;i>=1;i--)
    {
      for (j=1;j<=i;j++)
      {
        printf("%d",j);
        j=j-1;
      }
       
        printf("\n");
        
    }
return 0;
}