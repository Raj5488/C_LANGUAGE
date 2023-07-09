#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int ReverseNumber = 0;
    int lastDigit = 0;
    int sum = 0;
    while(n>0){
        ReverseNumber = ReverseNumber*10;
        ReverseNumber =ReverseNumber +(n%10);
        lastDigit = n%10;
        sum = lastDigit + sum;
        n = n/10;
    }
    printf("The sum of digits are %d", sum);

    return 0;
}