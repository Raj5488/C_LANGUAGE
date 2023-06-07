#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number");
    scanf("%d", &a);
    printf("Enter the second number");
    scanf("%d", &b);
    int remainder = a/b;
    printf("Your remainder is %d", remainder);

    return 0;
}
