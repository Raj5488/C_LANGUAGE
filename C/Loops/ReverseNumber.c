#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int ReverseNumber = 0;
    while(n>0){
        ReverseNumber = ReverseNumber*10;
        ReverseNumber =ReverseNumber +(n%10);
        n = n/10;
    }
    printf("The sum of digits are %d", ReverseNumber);

    return 0;
}