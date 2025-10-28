#include <stdio.h>

void printNumbers(int current, int n) {
    if(current > n) {
        return;
    }
    printf("%d ", current);
    printNumbers(current + 1, n);
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Numbers from 1 to %d:\n", n);
    printNumbers(1, n);
    
    return 0;
}