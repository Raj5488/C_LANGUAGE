#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int count = 0;
    int sum = 0;
    int lastDigit = 0;
    while(n>0){
        lastDigit = n%10;
        if(lastDigit%2==0){
        sum = lastDigit + sum;
        }
        n = n/10;
    }
    printf("The sum of digits are %d", sum);

    return 0;
}