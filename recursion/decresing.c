#include<stdio.h>
void decinc(int n,int m)
{
     if (m>n) return 0;
     printf("%d\n",m);
    decinc(n,m-1);
    
    printf("%d\n",m);
    return;
}
int main()
{
    int n,m;
    printf("enter value of n");
    scanf("%d",&n);
    decinc(n,m);
    return n;

}