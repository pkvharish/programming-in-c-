
#include <stdio.h>

void swap_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("\nInside call by value function:\n");
    printf("x = %d, y = %d\n", x, y);
}

void swap_reference(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("\nInside call by reference function:\n");
    printf("x = %d, y = %d\n", *x, *y);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    swap_value(a, b);

    printf("\nAfter call by value:\n");
    printf("a = %d, b = %d\n", a, b);

    swap_reference(&a, &b);

    printf("\nAfter call by reference:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
