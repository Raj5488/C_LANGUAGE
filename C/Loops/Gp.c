#include<stdio.h>
int main(){
    int n;
    printf("Enter the value :->");
    scanf("%d",&n);
    int a = 1;
    for(int i=1; i<=n; i++){
        printf("%d ",a);
    a = 2*a;
    }

    return 0;
}