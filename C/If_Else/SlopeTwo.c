// Give three points (x1,y1), (x2,y2) and (x3,y3), write a program to check if all the three points fall on one straight line

#include <stdio.h>
int main()
{
    double x1, y1, x2, y2, x3, y3;

    printf("Enter the value x1 : ");
    scanf("%d", &x1);

    printf("Enter the value x2 : ");
    scanf("%d", &x2);

    printf("Enter the value x3 : ");
    scanf("%d", &x3);

    printf("Enter the value y1 : ");
    scanf("%d", &y1);

    printf("Enter the value y2 : ");
    scanf("%d", &y2);

    printf("Enter the value y3 : ");
    scanf("%d", &y3);

    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        printf("This is a slope vlaue");
    }
    else
    {
        printf("This is not lies in slope");
    }

    return 0;
}