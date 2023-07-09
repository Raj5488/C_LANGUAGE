// Take 3 positive integers inputte and rint the greatest of them
#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1st number :");
    scanf("%d", &a);
    int b;
    printf("Enter 2st number :");
    scanf("%d", &b);
    int c;
    printf("Enter 3st number :");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greatest", a);
    }
    if (b > a && b > c)
    {
        printf("%d is greatest", b);
    }
    if (c > b && c > a)
    {
        printf("%d is greatest", c);
    }

    return 0;
}