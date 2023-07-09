#include<stdio.h>
int main(){
    int n;
    printf("Enter the value :");
    scanf("%d",&n);
    if(n%5==0){
        printf("This number is divisible by 5");
    }
    else{
        printf("This number is not divisible by 5");
    }

    return 0;
}