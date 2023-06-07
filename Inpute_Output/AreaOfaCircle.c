#include<stdio.h>
int main(){
    // WAP to display area of circle with given radious;
    float radious = 20;
    printf("Enter the radious : ");
    scanf("%f", &radious);
    float AreaOfCircle = 3.14 * radious * radious ;
    printf(" The are of circle is : %f", AreaOfCircle);

    return 0;
}