#include<stdio.h>
int main(){
    int n;
    printf("Enter the Year :");
    scanf("%d",&n);
    if(n%4==0){
        printf("Given Year is leap Year");
    }
    else{
        printf("This Year not leapYear");
    }


    return 0;
}