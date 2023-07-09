#include<stdio.h>
int main(){

    int n;
    printf("Enter the factorial number ;-. ");
    scanf("%d",&n);
    int product =1;
    for(int i=1; i<=n; i++){
        product= product*i;
    printf("The factorial %d is : %d\n",i, product);
    }
    // printf("The factorial is : %d", product);


    return 0;
}