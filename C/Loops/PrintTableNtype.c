#include<stdio.h>
int main(){
    int n;
    printf("Enter the table Number:- ");
    scanf("%d",&n);
    for(int i = 1; i<=10; i=i+1){
        printf("%d\n", i*n);
    }

    return 0;
}