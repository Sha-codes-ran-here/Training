include <stdio.h>

void add() {
    int a, b;
    a=printf("Enter first number: ");
    scanf("%d", &a);
    b=printf("Enter second number: ");
    scanf("%d", &b);
    printf("The sum of %d and %d is %d\n", a, b, a + b);
}
add();
