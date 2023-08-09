#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter a Any Number: ");
    scanf("%d", &n);
    
    printf("Odd numbers between 1 and %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { 
            printf("%d ", i); 
            sum += i;
        }
    }
    
    printf("\nSum of odd numbers between 1 and %d is: %d\n", n, sum);
    
    return 0;
}
