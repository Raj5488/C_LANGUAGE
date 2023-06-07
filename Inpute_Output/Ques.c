#include<stdio.h>
int main(){
    float x;
    printf("Enter a decimal number :");
    scanf("%f", &x);
    int y = x;
    float z = x-y;
    // printf("This is your float answer: %f", z);


    // Some important point
   // float X = 3/4;   answer 0.00
   float X = 3.50/4; // 0.87500
    printf(" This is divisible :%f\n", X);




    return 0;
}