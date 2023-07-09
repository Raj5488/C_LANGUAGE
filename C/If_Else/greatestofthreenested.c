// Take 3 positive integers inpute and print the greatest of them


#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st number :");    
    scanf("%d", &a);
    printf("Enter 2st number :");    
    scanf("%d", &b);
    printf("Enter 3st number :");    
    scanf("%d", &c);

    if(a>b){    // b is out of race
        if(a>c)
        printf("%d is greatest", a);
        else    // a<c
        printf("%d is greatest", c);
    }
    else{
        if(b>c)
        printf("%d is greatest",b);
    }

    return 0;
}