#include<stdio.h>
int main(){

    for(int i=1;i<=90;i++){
        char ch = (char)i;
        printf("%d -> ",i);
        printf("%c\n",ch);
    }
    return 0;
}