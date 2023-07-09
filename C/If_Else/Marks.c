#include<stdio.h>
int main(){
    int n;
    printf("Enter percentage:-> ");
    scanf("%d",&n);
    if(n>91 && n<=100){
        printf("Your grade is A");
    }
    else if(n>81 && n<=90){
        printf("You grade is B");
    }
    else if(n>71 && n<=80){
        printf("Your grade is C");
    }
    else if(n>61 && n<=70){
        printf("Your grade is D");
    }
    else if(n>51 && n<=60){
        printf("Your grade is E");
    }

    return 0;
}