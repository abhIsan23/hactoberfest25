#include<stdio.h>
int factorial(int x)
   {
    
    int fact=1;
       for (int i=2;i<=x;i++)
       fact = fact*i;
       
         return fact;
    } 
    int permutation(int n,int r)
    {
        int npr=factorial(n)/(factorial(n-r));
        return npr;

    }
    int main()
    {
        int n;
        printf("enter value of n");
        scanf("%d",&n);
        int r;
        printf("enter value of r");
        scanf("%d",&r);
        
        

        printf("%d",npr);
        return 0;
    }