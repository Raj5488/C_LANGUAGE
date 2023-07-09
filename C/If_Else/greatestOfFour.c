// Take 4 positive integer inpute and print the greatest of them

#include <stdio.h>
int main()
{
    int a;
    printf('enter a number of A :');
    scanf("%d", &a);

    int b;
    printf('enter a number of B :');
    scanf("%d", &b);

    int c;
    printf('enter a number of C :');
    scanf("%d", &c);

    int d;
    printf('enter a number of D :');
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("A is a greast", a);
    }

    if (b > a && b > c && b > d)
    {
        printf(" B is a greast", b);
    }

    if (c > b && c > a && c > d)
    {
        printf(" C is a greast", c);
    }

    if (d > a && d > b && d > b)
    {
        printf("D is a greast", d);
    }

    return 0;
}