#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("This Number is even");
    }
    else{
        printf("This number is Odd");
    }

    return 0;
}