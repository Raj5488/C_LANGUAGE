// Take positive integer inpute and tell if it is divisible by 5 and 3
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("this number is divisble by 5 and 3 ");
    }
    else{
        printf("This number is not divisible by 5 and 3 ");
    }

    return 0;
}