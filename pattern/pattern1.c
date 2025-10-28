#include<stdio.h>
int main ()
{
    int n,a=1,i,j;

    printf("entrer n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
      for (j=1;j<=i;j++)
      {
        printf("%d",a);
        a=(!a);
      }
        printf("\n");
    }
    return 0;
}
    