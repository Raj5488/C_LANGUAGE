// given the length nad breadth of a reactangle, write a program to find whether the area of the rectangle is greater than its perimeter.
#include <stdio.h>
int main()
{
    int l;
    printf("Enter length :");
    scanf("%d", &l);
    int b;
    printf("Enter breadth :");
    scanf("%d", &b);
    int area = l * b;
    int perimetter = 2 * (l + b);
    printf("Area is : %d\n", area);
    printf("Perimetter is : %d\n", perimetter);
    if (area > perimetter)
    {
        printf("Area is a greater than perimetter");
    }
    else if (area < perimetter)
    {
        printf("Area is not greater than perimettter");
    }
    else if (area == perimetter)
    {
        printf("Area and perimmeter is a same");
    }

    return 0;
}