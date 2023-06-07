#include<stdio.h>
int main(){
    float principal,rate,Time;
    printf("Enter the Principlale: ");
    scanf("%f", &principal);
    printf("Enter the Rate: ");
    scanf("%f", &rate);
    printf("Enter the Time: ");
    scanf("%f", &Time);
    float SimpleInterest = principal*Time* rate/100;
    printf("Simple Interest is :%f", SimpleInterest);




    return 0;
}