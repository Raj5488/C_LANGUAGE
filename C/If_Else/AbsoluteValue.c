#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    if (n < 0)
    {                 // if n is negative
        n = n * (-1); // if n is negative then we make possitive
    }
    printf("The absolue value is : %d", n);

    return 0;
}