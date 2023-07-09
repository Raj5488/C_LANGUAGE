#include<stdio.h>
int main(){
    int x ,y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the vlaue of y : ");
    scanf("%d",&y);
    if(x==0 && y==0){
        printf("This point is lies in origin");
    }
    else if(x==0){
        printf("This point is lies in Y axis");
    }
    else if(y==0){
        printf("This point is lies in X axis");
    }
    else{
        printf("This pint does not lies in x or y");
    }


    return 0;
}