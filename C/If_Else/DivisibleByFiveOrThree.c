// Take positive integer inpute and tell if it is divisible by 5 or 3

#include <stdio.h>
int main()
{
    int n;
    printf('Enter a number :');
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0)
    {
        printf("the number is divisible by 5 or 3");
    }
    else
    {
        printf("the number is not divisble by 3 or 5");
    }

    return 0;
}