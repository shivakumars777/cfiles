#include <stdio.h>
    

int fact() {
    int x, i;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    i = fact(x);
    printf("
    Factorial of %d is %d", x, i);
    return 0;
}

int fact(int n) {
    /* n=0 indicates a terminating condition */    if (n <= 0) {
//return (1);
    } else {
/* function calling itself */return (n * fact(n - 1));
/*n*fact(n-1) is a recursive expression */    }
}